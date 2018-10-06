#ifndef CONTENT_H
#define CONTENT_H


class Content
{
public:
    Content();
    virtual ~Content();

    // Initialization
    virtual void initFull(class QScrollArea* scrollArea);
    virtual void initThumbs(class QScrollArea* scrollArea);

    // Mutators
    virtual void setPath(QString& path);
    virtual void setSize(int size);
    virtual void setView(int view);

    // Operations
    virtual void onReset();
    virtual void onRotateL();
    virtual void onRotateR();
    virtual void onThumbsUp();
    virtual void onThumbsDown();

private:
    class ContentFull* _contentFull;
    class ContentThumbs* _contentThumbs;
};

#endif // CONTENT_H

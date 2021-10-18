#ifndef _ECU_H_
#define _ECU_H_

namespace ECU {

template <typename Payload>
class Integration {
};


template <typename Integration, typename Payload>
class Input {
    public:
        virtual bool match(const Payload& payload);
        virtual void update(const Payload& payload);
        virtual bool trigger();
};


template <typename Integration>
class Output {
    public:
        virtual bool send(const Payload& payload);
};


class Connector {
    public:
        void process(
};


class ECU {
    public:
        ECU() {}

        void loop() {
            // for each integration:
            //  get next payload
            //  update each input
            //    if triggered, flag connector to execute
            //  execute each flagged connector
        }

    private:
};

}

#endif

// 函数: sub_141d8db50
// 地址: 0x141d8db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int32_t rax_1 = (int.q(_mm_cvtepi32_ps(zx.o(*(arg1 + 8))).d)).d
    Concurrency::propagator_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<uint64_t> >::~propagator_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<uint64_t> >(
        rbx, rax_1, rax_1, 1)
    *rbx = &data_1432384e0
    rbx[1] = &data_143238508

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2
return arg2

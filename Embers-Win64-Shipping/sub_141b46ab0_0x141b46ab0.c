// 函数: sub_141b46ab0
// 地址: 0x141b46ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
(**arg1)(arg1, &arg_8)
void*** rax_1 = j_sub_140a82f30(0x50)
void*** rsi = rax_1

if (rax_1 == 0)
    rsi = nullptr
else
    int32_t rbx_1 = arg_8.d
    int32_t r15_1 = arg_8:4.d
    Concurrency::propagator_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<uint64_t> >::~propagator_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<uint64_t> >(
        rax_1, rbx_1, r15_1, arg3)
    *rsi = &data_14306cb30
    rsi[1] = &data_14306cb58
    void*** rax_2 = j_sub_140a82f30(0x78)
    
    if (rax_2 == 0)
        rsi[9] = 0
    else
        rax_2[1] = 0
        rax_2[3].d = 0xffffffff
        *(rax_2 + 0x1c) = 4
        __builtin_memset(&rax_2[4], 0, 0x18)
        rax_2[7] = -0x3810000020000000
        __builtin_memset(&rax_2[8], 0, 0x17)
        *rax_2 = &data_14306ca70
        rax_2[0xb].d = rbx_1
        *(rax_2 + 0x5c) = r15_1
        rax_2[2] = &data_14306ca90
        rax_2[0xc].b = arg3
        rax_2[0xd] = 0
        rax_2[0xe] = 0
        rsi[9] = rax_2

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rsi

*arg2 = rsi
arg2[1] = rax_3
return arg2

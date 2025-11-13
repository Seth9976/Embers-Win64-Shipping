// 函数: sub_141b760e0
// 地址: 0x141b760e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const arg_20

if (sub_141b46520(arg1) == 0)
    char* var_20 = arg3
    void** const var_28 = &data_143084b50
    void** var_18 = &arg_20
    return sub_141b46700(arg2, arg1, &var_28)

if (sub_14082fb80(arg1) != 0)
    return sub_141b97b20(arg2, sub_14082fb80(arg1), arg3)

int64_t rax_4 = sub_1405948b0(arg1)

if (rax_4 == 0)
    return rax_4

void* rax_5 = sub_141b46500(arg1)
void var_38
int128_t* rax_6 = sub_141b464f0(rax_5, &var_38)
void* const rbx_1

if (*(rax_6 + 8) != 0)
    rbx_1 = nullptr
else
    rbx_1 = *rax_6

arg_20 = rbx_1

if (rbx_1 == 0 || ((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x15).b & 1) == 0)
    goto label_141b76218

uint64_t rax_9

if (sub_1408e52c0(rax_5) == 0xffffffff)
    rbx_1 = arg_20
label_141b76218:
    int64_t rax_13 = sub_1405948b0(arg1)
    rax_9.b = (*(rbx_1 + 0x7b) & *(zx.q(*(rbx_1 + 0x79)) + rax_13)) != 0
    *arg3 = rax_9.b
else
    rax_9 = sub_1405948b0(arg1)
    int64_t* r10_1 = *(rbx_1 + 0x78)
    
    if (arg3 != rax_9)
        if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
            (*(*r10_1 + 0xb0))(r10_1, arg3, rax_9, 1)
            int64_t rax_12
            rax_12.b = 1
            return rax_12
        
        memcpy(arg3, rax_9, *(r10_1 + 0x3c))
        int64_t rax_10
        rax_10.b = 1
        return rax_10

rax_9.b = 1
return rax_9

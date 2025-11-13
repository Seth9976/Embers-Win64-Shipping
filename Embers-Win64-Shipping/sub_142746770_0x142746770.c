// 函数: sub_142746770
// 地址: 0x142746770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi

if (arg3[1] == 0)
label_14274680a:
    int64_t* rax_8 = sub_142496c20()
    rsi = rax_8[0x23]
    
    if (rsi == 0)
        int64_t rdx_3 = *rax_8
        (*(rdx_3 + 0x390))(rax_8, rdx_3)
        rsi = rax_8[0x23]
else
    void* rax_1 = sub_142496c20()
    
    if (rax_1 == 0)
        goto label_14274680a
    
    void* rdx_1 = arg3[1]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || rdx_1 == 0)
        goto label_14274680a
    
    void* rax_4 = sub_142496c20()
    int64_t rax_5
    int64_t* rbx_1
    
    if (rax_4 != 0)
        rbx_1 = arg3[1]
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_4 == 0 || rax_5.d s> rbx_1[7].d || *(rbx_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
        rbx_1 = nullptr
    
    rsi = rbx_1[0x23]
    
    if (rsi == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        rsi = rbx_1[0x23]

if ((*(*arg3 + 0x10))(arg3, 1) != 0)
    return (*(*(arg1 + 0x638) + 0x10))(arg1 + 0x638, arg2, arg3 + 0x3c, arg3 + 0x14, *(rsi + 0x30))

char result = (*(*arg3 + 0x10))(arg3, 2)

if (result == 0)
    return result

int512_t zmm3
zmm3.o = *(arg3 + 0x1c)
return (*(*(arg1 + 0x638) + 0x18))(arg1 + 0x638, arg2, arg3 + 0x24, zmm3, *(rsi + 0x30), 0, arg4)

// 函数: sub_142638ac0
// 地址: 0x142638ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg1, 0x12)

int64_t rcx = *(arg2 + 0x50)

if (rcx != 0)
    sub_1426324c0(rcx)
    *(arg2 + 0x50) = 0

int16_t* rax_2 = j_sub_1426075c0(zx.q(arg2[2] * 2), 1)
int32_t rcx_3 = arg2[2]
int16_t* rsi = rax_2

if (rax_2 == 0)
    sub_14262d160(arg1, (rax_2 + 3).d, "rcBuildDistanceField: Out of memory 'src' (%d).", 
        zx.q(rcx_3))
    int64_t rax_3
    rax_3.b = 0
    return rax_3

int16_t* rax_4 = j_sub_1426075c0(zx.q(rcx_3 * 2), 1)
int16_t* rbp = rax_4
int64_t rax_5

if (rax_4 != 0)
    int16_t arg_8 = 0
    
    if (*(arg1 + 9) != 0)
        (*(*arg1 + 0x20))(arg1, 0x13)
    
    sub_1426361a0(arg2, rsi, &arg_8)
    arg2[6].w = arg_8
    
    if (*(arg1 + 9) != 0)
        (*(*arg1 + 0x28))(arg1, 0x13)
        
        if (*(arg1 + 9) != 0)
            (*(*arg1 + 0x20))(arg1, 0x14)
    
    if (sub_142635e70(arg2, 1, rsi, rbp) != rsi)
        int16_t* rax_13 = rsi
        rsi = rbp
        rbp = rax_13
    
    *(arg2 + 0x50) = rsi
    
    if (*(arg1 + 9) != 0)
        (*(*arg1 + 0x28))(arg1, 0x14)
        
        if (*(arg1 + 9) != 0)
            (*(*arg1 + 0x28))(arg1, 0x12)
    
    sub_1426324c0(rbp)
    rax_5.b = 1
else
    sub_14262d160(arg1, (rax_4 + 3).d, "rcBuildDistanceField: Out of memory 'dst' (%d).", 
        zx.q(arg2[2]))
    sub_1426324c0(rsi)
    rax_5.b = 0

return rax_5

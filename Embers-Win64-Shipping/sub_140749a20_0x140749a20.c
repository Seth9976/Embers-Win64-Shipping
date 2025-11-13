// 函数: sub_140749a20
// 地址: 0x140749a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t i_2 = 0
int32_t var_18 = 0xffffffff
void* result = sub_140d3cc80(sub_14086a680(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t r8_1 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r8_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

int64_t rdi
int64_t arg_20 = rdi

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rbx_2 = *(r8_1 + (sx.q(i_1) << 3))
    
    if (rbx_2[0x81] == arg2)
        if ((*(rbx_2 + 0x8a) & 1) != 0 || rbx_2[0xb6].d != 0xffffffff)
            rdi.b = 1
        else
            rdi.b = 0
        
        if (arg1[6].b != 0)
            sub_140752310(rbx_2)
            i_1 = i_3
            i = i_2
            r8_1 = var_28
        
        if (rdi.b != 0 || *(arg1 + 0x31) == rdi.b)
            sub_140749bb0(arg1, rbx_2, arg3)
            i_1 = i_3
            i = i_2
            r8_1 = var_28
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r8_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r8_1 == 0)
    return result

return sub_140a74f90(r8_1)

// 函数: sub_1423772d0
// 地址: 0x1423772d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *arg2

if (rcx == 0)
    arg2 = arg1 + 0x148
    rcx = *arg2

int64_t* rbx = arg2[1]
int64_t var_48 = rcx

if (rbx != 0)
    rbx[1].d += 1

if (&var_48 != arg1 + 0x130)
    var_48.o = *(arg1 + 0x130)
    *(arg1 + 0x130) = var_48.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x140) = arg3
*(arg1 + 0x141) = arg4
*(arg1 + 0x142) = arg5
void* rax

if (arg6 == 0 || *(arg1 + 0x15c) == 0)
    rax.b = 0
else
    rax.b = 1

*(arg1 + 0x143) = rax.b
int64_t rax_3 = *(arg1 + 0x130)

if (rax_3 != 0)
    char rcx_3 = *(arg1 + 0x140)
    
    if (rcx_3 == 0)
        var_48 = rax_3
        int64_t* rax_4 = *(arg1 + 0x138)
        
        if (rax_4 != 0)
            rax_4[1].d += 1
        
        sub_140f5d9a0(*(arg1 + 0x120), &var_48)
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp4_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rax_4 + 8))(rax_4, 1)
        
        char rax_7 = data_1439ae51c
        
        if (*(arg1 + 0x142) == 0)
            rax_7 = data_1439ae51d
        
        var_48.b = rax_7
        int64_t var_40_2 = 0
        int32_t var_38_1 = 0
        var_48:1.b = 1
        sub_140e253b0(*(*(arg1 + 0xf0) + 0x360), &var_48)
    else if (rcx_3 == 1)
        var_48 = rax_3
        int64_t* rax_8 = *(arg1 + 0x138)
        
        if (rax_8 != 0)
            rax_8[1].d += 1
        
        sub_140f5d9a0(*(arg1 + 0x110), &var_48)
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp5_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_8 + 8))(rax_8, 1)
        
        sub_142377280(*(arg1 + 0x100), *(arg1 + 0x142))

return sub_142379250(arg1 - 0x390) __tailcall

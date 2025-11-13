// 函数: sub_141d85f00
// 地址: 0x141d85f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_48 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_48 != arg1)
    var_48.o = *arg1
    *arg1 = var_48.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (&arg1[1] != &arg2[2])
    int64_t* rbx_1 = arg1[1].q
    int32_t i_3 = *(arg1 + 0x18)
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[3].d
    void* rdi_1 = arg2[2]
    int32_t r8_1 = *(arg1 + 0x1c)
    *(arg1 + 0x18) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1405a4be0(&arg1[1], i_2, r8_1)
        int64_t* rbx_2 = arg1[1].q
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                *rbx_2 = 0
                int32_t rsi_1 = *(rdi_1 + 8)
                int64_t r13_1 = *rdi_1
                rbx_2[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx_2, rsi_1, 0)
                    memcpy(*rbx_2, r13_1, rsi_1 * 2)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2 = &rbx_2[2]
                rdi_1 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x1c) = 0

arg1[2].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x25) = *(arg2 + 0x25)
*(arg1 + 0x26) = *(arg2 + 0x26)
*(arg1 + 0x27) = *(arg2 + 0x27)
*(arg1 + 0x28) = arg2[5].b
*(arg1 + 0x29) = *(arg2 + 0x29)
return arg1

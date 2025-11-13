// 函数: sub_140e19ef0
// 地址: 0x140e19ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 6

if (arg2 != 4)
    r14 = arg2

uint64_t rsi

if ((r14 & 4) == 0)
    rsi.b = 0
else
    uint8_t rax_1 = arg1[5].b
    uint8_t rbx_1 = rax_1 u>> 6
    
    if ((rax_1 & 0x20) != 0)
        rax_1 = 0x40
    else
        rax_1 = (*(*arg1 + 0x220))()
        
        if (rax_1 != 0)
            rax_1 = 0x40
    
    rsi.b = arg1[5].b & 0xbf
    rsi.b |= rax_1
    arg1[5].b = rsi.b
    rsi.b u>>= 6
    rsi.b ^= rbx_1
    rsi.b &= 1

if ((r14 & 8) != 0 || *(arg1 + 0x17c) == 0)
    *(arg1 + 0x29) |= 2

char result = sub_140db3510(&arg1[3])

if (result == 0)
    return result

char rbp_1 = 0

if ((r14 & 0x20) != 0)
    int64_t* rbx_2 = arg1[0x4e]
    char rdx
    
    if (rbx_2 == 0)
        rdx = 0
    else
        int32_t rax_3 = rbx_2[1].d
        
        if (rax_3 != 0)
            rbx_2[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 == 0)
            rdx = 0
        else
            void* rax_4 = arg1[0x4d]
            
            if (rax_4 == 0)
                rdx = 0
            else
                rdx = not.b(*(rax_4 + 0x29)) & 1
    
    sub_140e27210(arg1, rdx, 0, *(arg1[3] + 0x370))
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (rsi.b != 0)
    int64_t* rbx_3 = arg1[0x4e]
    int64_t* rax_7 = rbx_3
    
    if (rbx_3 != 0)
        int32_t rax_8 = rbx_3[1].d
        
        if (rax_8 == 0)
            rbx_3 = nullptr
            rax_7 = nullptr
        else
            rbx_3[1].d = rax_8 + 1
            rax_7 = rbx_3
    
    if (rax_7 != 0)
        void* rax_10 = arg1[0x4d]
        
        if (rax_10 != 0)
            char rax_11 = *(rax_10 + 0x28)
            
            if ((rax_11 & 0x40) != 0 || rax_11 s< 0)
                rbp_1 = 1
    
    sub_140e27430(arg1, rbp_1)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

return sub_140db4340(&arg1[3], r14)

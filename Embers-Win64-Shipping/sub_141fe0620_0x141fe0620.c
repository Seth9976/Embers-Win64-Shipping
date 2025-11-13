// 函数: sub_141fe0620
// 地址: 0x141fe0620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141fe6530(arg1, 1)
int32_t i_1 = arg1[8].d
void* rsi = nullptr
int64_t* rdi = arg1[7]

if (i_1 != 0)
    void* rbx_1 = &rdi[5]
    int32_t i
    
    do
        int64_t* rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0 && *(rbx_1 + 8) != 0)
            (*(*rcx + 0x10))(rcx, rbx_1 + 8)
            *(rbx_1 + 0x10) = 0
        
        sub_14081c9d0(rbx_1 + 8)
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0 && *(rbx_1 - 8) != 0)
            (*(*rcx_2 + 0x10))(rcx_2, rbx_1 - 8)
            *rbx_1 = 0
        
        sub_14081c9d0(rbx_1 - 8)
        int64_t* rcx_4 = *(rbx_1 - 0x10)
        
        if (rcx_4 != 0 && *(rbx_1 - 0x18) != 0)
            (*(*rcx_4 + 0x10))(rcx_4, rbx_1 - 0x18)
            *(rbx_1 - 0x10) = 0
        
        sub_14081c9d0(rbx_1 - 0x18)
        int64_t* rcx_6 = *(rbx_1 - 0x20)
        
        if (rcx_6 != 0 && *rdi != 0)
            (*(*rcx_6 + 0x10))(rcx_6, rdi)
            *(rbx_1 - 0x20) = 0
        
        result = sub_14081c9d0(rdi)
        rdi = &rdi[9]
        rbx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    result = sub_140775c70(&arg1[7], 0)

int64_t* rbx_2 = arg1[6]
arg1[6] = 0

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        if (rbx_2[2].b != 0)
            return (**rbx_2)(rbx_2, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx_2)(rbx_2, 1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_2 + 0xc))
            *(rbx_2 + 0xc) = 1
            z_1 = true
        else
            result = *(rbx_2 + 0xc)
            z_1 = false
        
        if (z_1)
            int32_t rax_5 = sub_140a20af0()
            
            if (rax_5 != 0)
                rsi =
                    *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3)) + (zx.q(rax_5) & 0x3fff) * 0x18
            
            *(rsi + 8) = rbx_2
            return sub_1405a42f0(&data_143f02390, rax_5)

return result

// 函数: sub_142c3ecc0
// 地址: 0x142c3ecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x60))
int32_t* rdi = *(arg2 + 0x70)

if (result.d != 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t rbx_1 = *rdi
        uint32_t rdx = zx.d(sub_142c47040(rbx_1))
        uint32_t rdx_1 = rdx u>> 8
        int32_t r9_2 = rdx & 0x7f
        int32_t rax_10
        
        if (rbx_1 - 0x953 u<= 1)
            r9_2 = 8
            rax_10 = 1 << r9_2.b
        else if (rbx_1 - 0xa72 u<= 1 || rbx_1 - 0x1cf5 u<= 1)
            r9_2 = 1
            rax_10 = 1 << r9_2.b
        else if (rbx_1 - 0x1ce2 u<= 6)
            r9_2 = 0xa
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0x1ced)
            r9_2 = 0xa
            rax_10 = 1 << r9_2.b
        else if (rbx_1 - 0xa8f2 u<= 5 || rbx_1 - 0x1ce9 u<= 3 || rbx_1 - 0x1cee u<= 3)
            r9_2 = 0x12
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0xa51)
            r9_2 = 7
            rdx_1 = 8
            rax_10 = 1 << r9_2.b
        else if (((rbx_1 - 0x11301) & 0xfffffffd) == 0)
            r9_2 = 8
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0x1133c)
            r9_2 = 3
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0xafb)
            r9_2 = 3
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0x980)
            r9_2 = 0xb
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0x9fc)
            r9_2 = 0xb
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0xc80)
            r9_2 = 0xb
            rax_10 = 1 << r9_2.b
        else if (rbx_1 - 0x2010 u<= 1)
            r9_2 = 0xb
            rax_10 = 1 << r9_2.b
        else if (rbx_1 == 0x25cc)
            r9_2 = 0xc
            rax_10 = 1 << r9_2.b
        else if (r9_2 u< 0x20)
            rax_10 = 1 << r9_2.b
        else
            rax_10 = 0
        
        if ((rax_10 & 0xb1806) != 0)
            rdx_1 = 4
            int32_t j = 0
            result = &data_1436a4da8
            
            do
                if (rbx_1 == *result)
                    r9_2 = 0x10
                    break
                
                j += 1
                result += 4
            while (j u< 0xc)
        else if (r9_2 != 7)
            if (r9_2 u>= 0x20)
                result = 0
            else
                result = zx.q(1 << r9_2.b)
            
            if ((result.d & 0x40500) != 0)
                rdx_1 = 0xe
        else
            result = sub_142c41490(rbx_1, rdx_1)
            rdx_1 = result.d
        
        *(rdi + 0x12) = r9_2.b
        
        if (rbx_1 == 0xb01)
            rdx_1 = 7
        
        *(rdi + 0x13) = rdx_1.b
        rdi = &rdi[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

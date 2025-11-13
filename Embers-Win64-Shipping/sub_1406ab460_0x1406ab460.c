// 函数: sub_1406ab460
// 地址: 0x1406ab460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = sub_1406ab270(arg1)

if (i == 0)
    return i

do
    if (i != 2)
        int32_t rax = *(arg1 + 0x74)
        
        if (rax == 0 && (arg1[0x10].d & 0x100000) == 0)
            sub_1406ad7b0(arg1, error_escape)
            noreturn
        
        if (*(arg1 + 0x7c) != 0x2d)
            sub_1406a97c0(&arg1[8], rax.b)
        else
            char* rcx = *arg1
            int64_t rax_1 = arg1[2]
            
            if (rcx != rax_1)
                if (*rcx == 0x5c)
                    void* rdx_1 = &rcx[1]
                    rcx = rdx_1
                    
                    if (rdx_1 == rax_1)
                        rcx = *arg1
                    else
                        char r8_1 = (arg1[0x10].d).b
                        
                        if (((r8_1 & 8) != 0 || *rdx_1 - 0x28 u> 1)
                                && ((r8_1 & 0x10) != 0 || ((*rdx_1 - 0x7b) & 0xfd) != 0))
                            rcx = *arg1
                
                *arg1 = &rcx[1]
            
            sub_1406af960(arg1)
            char rdi_1 = *(arg1 + 0x74)
            int32_t rax_5 = sub_1406ab270(arg1)
            
            if (rax_5 == 0)
                sub_1406a97c0(&arg1[8], *(arg1 + 0x74))
                return sub_1406a97c0(&arg1[8], 0x2d)
            
            char r8_2
            
            if (rax_5 != 2)
                if ((arg1[0xe].d & 0x800) != 0)
                    *(arg1 + 0x74) = sx.d(sub_1406b15f0(arg1[0xd], *(arg1 + 0x74)))
                    rdi_1 = sub_1406b15f0(arg1[0xd], rdi_1)
                
                r8_2 = *(arg1 + 0x74)
            
            if (rax_5 == 2 || r8_2 u< rdi_1)
                sub_1406ad7b0(arg1, error_range)
                noreturn
            
            sub_1406a9bf0(&arg1[8], rdi_1, r8_2)
    
    i = sub_1406ab270(arg1)
while (i != 0)

return i

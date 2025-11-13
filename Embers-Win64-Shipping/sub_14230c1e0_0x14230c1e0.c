// 函数: sub_14230c1e0
// 地址: 0x14230c1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xd0)
int64_t rbx = 0
int64_t result = sx.q(*(arg1 + 0xd8))
int64_t* r12 = nullptr
int64_t* var_88 = nullptr
int32_t r14 = 0
int32_t r13 = 0
int32_t var_7c = 0
int64_t result_1 = &rdi[result]

if (rdi != result_1)
    result = result_1
    
    do
        void* rsi = *rdi
        
        if (rsi != 0)
            void* rax = sub_142591550()
            void* rdx_1 = *(rsi + 0x10)
            int64_t rax_1 = sx.q(*(rax + 0x38))
            
            if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
                int64_t* rcx_1 = *(rsi + 0x8b0)
                
                if ((*(*rcx_1 + 0x38))(rcx_1, rdx_1) != 0)
                    int64_t r15_1 = sx.q(r14)
                    r14 = (r15_1 + 1).d
                    
                    if (r14 s> r13)
                        sub_1405a4d70(&var_88)
                        r13 = var_7c
                        r12 = var_88
                    
                    r12[r15_1] = rsi
            
            result = result_1
        
        rdi = &rdi[1]
    while (rdi != result)
    
    if (r14 != 0)
        int64_t rdx_3 = 0
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x40)
        int64_t* rcx_4 = *(arg1 + 0x8b0)
        int64_t var_48
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x78))(rcx_4, &var_78, 0)
            rdx_3 = var_48
        
        int64_t* rdi_1 = r12
        void* rcx_5 = &r12[sx.q(r14)]
        uint64_t rsi_4 = (rcx_5 - r12 + 7) u>> 3
        
        if (r12 u> rcx_5)
            rsi_4 = 0
        
        if (rsi_4 != 0)
            do
                int64_t* rcx_6 = *(*rdi_1 + 0x8b0)
                (*(*rcx_6 + 0x68))(rcx_6, &var_78)
                rbx += 1
                rdi_1 = &rdi_1[1]
            while (rbx != rsi_4)
            
            rdx_3 = var_48
        
        if (rdx_3 != 0)
            sub_140a74f90(rdx_3)
        
        int64_t var_58
        result = sub_1405ded70(&var_58)
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_10 = var_78
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
    
    if (r12 != 0)
        return sub_140a74f90(r12)

return result

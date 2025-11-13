// 函数: sub_14060b9d0
// 地址: 0x14060b9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t rdx = *arg1
int64_t rax_2 = (arg1[1] - rdx) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - rdx) s>> 3
uint64_t rdx_2 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_2)
    int64_t rax_4 = rdx_2 + rcx_2
    int64_t r14_1 = rax_2 + 1
    
    if (rax_4 u>= rax_2 + 1)
        r14_1 = rax_4
    
    if (r14_1 u<= 0x1fffffffffffffff)
        int64_t r14_2 = r14_1 << 3
        void* rdi_2
        
        if (r14_2 u< 0x1000)
            if (r14_2 == 0)
                rdi_2 = nullptr
            else
                rdi_2 = j_sub_140a82f30(r14_2)
            
            goto label_14060baaf
        
        if (r14_2 + 0x27 u> r14_2)
            int64_t rax_5 = j_sub_140a82f30(r14_2 + 0x27)
            
            if (rax_5 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rdi_2 = (rax_5 + 0x27) & 0xffffffffffffffe0
            *(rdi_2 - 8) = rax_5
        label_14060baaf:
            void* result = rdi_2 + ((rbx - rdx) s>> 3 << 3)
            *result = *arg3
            void* rdx_3 = rdi_2
            int64_t r8 = arg1[1]
            int64_t* rcx_5 = *arg1
            
            if (rbx != r8)
                if (rcx_5 != rbx)
                    do
                        int64_t rax_9 = *rcx_5
                        rcx_5 = &rcx_5[1]
                        *rdx_3 = rax_9
                        rdx_3 += 8
                    while (rcx_5 != rbx)
                    
                    r8 = arg1[1]
                
                if (rbx != r8)
                    void* rcx_7 = result - rbx
                    
                    do
                        *(rcx_7 + rbx + 8) = *rbx
                        rbx = &rbx[1]
                    while (rbx != r8)
            else
                while (rcx_5 != r8)
                    int64_t rax_8 = *rcx_5
                    rcx_5 = &rcx_5[1]
                    *rdx_3 = rax_8
                    rdx_3 += 8
            
            void* rcx_9 = *arg1
            
            if (rcx_9 == 0)
                goto label_14060bb6e
            
            if (((arg1[2] - rcx_9) & 0xfffffffffffffff8) u< 0x1000)
                goto label_14060bb65
            
            void* r8_1 = *(rcx_9 - 8)
            
            if (rcx_9 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_9 = r8_1
        label_14060bb65:
            j_sub_140a74f90(rcx_9)
        label_14060bb6e:
            *arg1 = rdi_2
            arg1[1] = rdi_2 + ((rax_2 + 1) << 3)
            arg1[2] = r14_2 + rdi_2
            return result

stdext::threads::_Throw_lock_error()
noreturn

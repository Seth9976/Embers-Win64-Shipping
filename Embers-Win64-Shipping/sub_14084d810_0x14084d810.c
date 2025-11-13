// 函数: sub_14084d810
// 地址: 0x14084d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    void* rax = *(rcx + 0x18)
    int64_t* rdi_1 = *(rcx + 0x20)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        rcx = *arg1
    
    if (*(rcx + 0x10) != 0xffffffff)
        sub_140858cf0(rax, rcx)
        rcx = *arg1
    
    sub_140861190(rcx, 0)
    void* rax_1 = *arg1
    
    if ((*(rax_1 + 0x6b8) & 0x20) != 0)
        void* rbx_1 = *(rax_1 + 0x6f0)
        int64_t r14_1 = *(rax_1 + 0xe0)
        int64_t var_40_1 = r14_1
        char rax_2 = sub_140a80f40()
        
        if (rax_2 != 0)
            sub_1408345c0(rbx_1, r14_1)
        else if (data_143f138f4 != rax_2)
        label_14084d8e9:
            void var_38
            int64_t* rax_4 = sub_14084cef0(&var_38, nullptr, 0xff)
            *(*rax_4 + 0x10) = rbx_1.o
            void* rcx_5 = *rax_4
            int32_t r8_1 = rax_4[2].d
            int64_t* rdx_3 = rax_4[1]
            int64_t* rbx_2 = *(rcx_5 + 0x28)
            int64_t* arg_10 = rbx_2
            int32_t* r14_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *r14_2 += 1
                rbx_2 = arg_10
            
            sub_1405e48c0(rcx_5, rdx_3, r8_1, 1)
            
            if (rbx_2 != 0)
                int32_t rax_5 = *r14_2
                *r14_2 -= 1
                
                if (rax_5 == 1)
                    sub_140a2f6e0(arg_10)
        else if (data_143de5480 == rax_2)
            sub_1408345c0(rbx_1, r14_1)
        else
            uint32_t rax_3
            rax_3.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_3.b == 0)
                goto label_14084d8e9
            
            sub_1408345c0(rbx_1, r14_1)
    
    int64_t* rcx_7 = *(*arg1 + 0x28)
    
    if (rcx_7 != 0)
        void* rax_7 = rcx_7[0x15]
        
        if (rax_7 == 0)
            rax_7 = sub_141ee69e0(rcx_7)
        
        rcx_7 = sub_140865dd0(rax_7)
    
    *(*arg1 + 0x28) = 0
    sub_1408646b0(rcx_7, arg1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbp_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))

int64_t* rcx_11 = *arg1
*arg1 = 0

if (rcx_11 != 0)
    (**rcx_11)(rcx_11, 1)

uint64_t result
result.b = 1
return result

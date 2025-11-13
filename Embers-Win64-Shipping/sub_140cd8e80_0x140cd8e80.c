// 函数: sub_140cd8e80
// 地址: 0x140cd8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x78)
char r13 = (*(arg1 + 0x80)).b
int64_t* rdi = arg2
uint64_t i_2 = zx.q(arg3[1].d)
int32_t r8 = arg2[1].d
int32_t r14 = *(rax + 0x3c)
void* var_48 = rax
uint8_t result = not.b((zx.q(*(rax + 0x40)) u>> 0x1e).b)
int32_t var_38 = r14
void* rbx_1
char rbp_1

if ((result & 1) == 0)
    if (r8 != 0)
        result = sub_140cd9680(&var_48, 0, r8)
    label_140cd8f5d:
        rbp_1 = r13
        rbx_1 = nullptr
        rdi[1].d = 0
        char r15_1 = not.b(rbp_1) & 1
        
        if (i_2.d != *(rdi + 0xc))
            int32_t rdx_2 = i_2.d
            
            if (r15_1 != 0)
                result = sub_140ce4fc0(rdi, rdx_2, r14)
            else
                result = sub_140ce4f50(rdi, rdx_2, r14)
        
        if (i_2.d != 0)
            uint64_t rdx_3 = zx.q(rdi[1].d)
            int32_t rcx_5 = *(rdi + 0xc)
            uint32_t rax_2 = (rdx_3 + i_2).d
            rdi[1].d = rax_2
            
            if (r15_1 != 0)
                if (rax_2 s> rcx_5)
                    sub_140ce4cd0(rdi, rdx_3, r14)
            else if (rax_2 s> rcx_5)
                sub_140ce4c40(rdi, rdx_3.d, r14)
            
            goto label_140cd8fc9
    else if (i_2.d != 0)
        goto label_140cd8f5d
else if (r8 != 0)
    sub_140cd9680(&var_48, 0, r8)
label_140cd8ef9:
    rbx_1 = nullptr
    rdi[1].d = 0
    result = not.b(r13) & 1
    
    if (i_2.d != *(rdi + 0xc))
        int32_t rdx = i_2.d
        
        if (result != 0)
            result = sub_140ce4fc0(rdi, rdx, r14)
        else
            result = sub_140ce4f50(rdi, rdx, r14)
    
    if (i_2.d != 0)
        sub_140cd78f0(&var_48, i_2.d)
        rbp_1 = r13
        rdi = arg2
    label_140cd8fc9:
        void* r8_5 = arg1
        void* rdx_4 = *(r8_5 + 0x78)
        int64_t rcx_8 = sx.q(*(rdx_4 + 0x3c))
        void* r14_1
        
        if (arg3[1].d != 0)
            r14_1 = *arg3
            
            if ((not.b(r13) & 1) == 0 && (r14_1.b & 1) != 0)
                r14_1 = (r14_1 s>> 1) + arg3
        else
            r14_1 = nullptr
        
        if (rdi[1].d != 0)
            rbx_1 = *rdi
            
            if ((not.b(rbp_1) & 1) == 0 && (rbx_1.b & 1) != 0)
                rbx_1 = (rbx_1 s>> 1) + rdi
        
        result = not.b((zx.q(*(rdx_4 + 0x40)) u>> 0x1e).b)
        
        if ((result & 1) == 0)
            return memcpy(rbx_1, r14_1, i_2.d * rcx_8.d)
        
        if (i_2.d s> 0)
            void* r14_3 = r14_1 - rbx_1
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                int64_t* rcx_9 = *(r8_5 + 0x78)
                int64_t rdx_5 = r14_3 + rbx_1
                
                if (rbx_1 != rdx_5)
                    if (not(test_bit(zx.q(rcx_9[8].d), 0x1e)))
                        result = (*(*rcx_9 + 0xb0))(rcx_9, rbx_1, rdx_5, zx.q(rcx_9[7].d))
                    else
                        result = memcpy(rbx_1, rdx_5, *(rcx_9 + 0x3c) * rcx_9[7].d)
                    
                    r8_5 = arg1
                
                rbx_1 += rcx_8
                i = i_1
                i_1 -= 1
            while (i != 1)
else if (i_2.d != 0)
    goto label_140cd8ef9
return result

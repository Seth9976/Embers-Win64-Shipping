// 函数: sub_141e61330
// 地址: 0x141e61330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* rdi = arg3
int64_t* r14 = arg2
arg3.b = 1
void* result = sub_141e5fc50(arg1, rdi, arg3.b)
bool cond:0 = result != 0

if (result != 0)
    void var_88
    
    if (*(result + 0x18) != 0)
        sub_141e4c4c0(r14, &var_88, result + 0x18, nullptr)
    
    int64_t* r12_1 = *arg4
    void* r15_1 = nullptr
    int64_t rax = sx.q(arg4[1].d)
    void* var_78 = nullptr
    int64_t var_70_1 = 0
    void* rax_1 = &r12_1[rax]
    
    if (r12_1 != rax_1)
        do
            int128_t var_68
            (*(*arg1 + 0x350))(arg1, &var_68, rdi, *r12_1)
            int32_t var_58
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(var_58, 0) == 0
            int32_t var_54
            int64_t* var_50
            
            if ((var_54 != 0 | rcx_2.b) != 0)
                int64_t rbx_1 = sx.q(var_70_1.d)
                int32_t rax_4 = (rbx_1 + 1).d
                var_70_1.d = rax_4
                
                if (rax_4 s> var_70_1:4.d)
                    sub_1405c4ec0(&var_78)
                
                void* rax_5 = var_78
                int64_t rcx_4 = rbx_1 * 5
                *(rax_5 + (rcx_4 << 3)) = var_68
                void* rdx_4 = rax_5 + (rcx_4 << 3)
                *(rdx_4 + 0x10) = var_58.q
                *(rdx_4 + 0x18) = 0
                int32_t i_5
                int32_t i_3 = i_5
                int64_t* rdi_1 = var_50
                *(rdx_4 + 0x20) = i_3
                
                if (i_3 != 0)
                    sub_140808f70(rdx_4 + 0x18, i_3, 0)
                    int64_t* rbx_3 = *(rdx_4 + 0x18)
                    int32_t i
                    
                    do
                        *rbx_3 = *rdi_1
                        sub_140596d10(&rbx_3[1], &rdi_1[1])
                        rbx_3 = &rbx_3[3]
                        rdi_1 = &rdi_1[3]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                else
                    *(rdx_4 + 0x24) = 0
                
                rdi = arg_18
            
            sub_1408464b0(&var_50)
            r12_1 = &r12_1[1]
        while (r12_1 != rax_1)
        
        r15_1 = var_78
        r14 = arg2
    
    if (arg5 != 0)
        (*(*arg1 + 0x288))(arg1, &var_78)
        r15_1 = var_78
    
    void* i_1 = r15_1 + sx.q(var_70_1.d) * 0x28
    
    if (r15_1 != i_1)
        void* r15_2 = r15_1 + 0x20
        
        do
            int32_t rcx_11 = r14[1].d - *(r14 + 0x34)
            int32_t rbx_5 = *r15_2 + rcx_11
            
            if (rbx_5 s> rcx_11)
                sub_1409d9850(r14, rbx_5)
                int32_t rdx_10
                
                if (rbx_5 u< 4)
                    rdx_10 = 1
                else
                    uint32_t rbx_6 = rbx_5 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rbx_6 + 8)
                    int32_t rcx_13
                    
                    if (rbx_6 == 0xfffffff8)
                        rcx_13 = 0x20
                    else
                        rcx_13 = 0x1f - temp0_1
                    
                    int32_t rcx_15 = rcx_13 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    char temp0_2
                    temp0_2, rflags_2 = _bit_scan_reverse(rbx_6 + 7)
                    char rdx_9
                    
                    if (rcx_15 == 0)
                        rdx_9 = 0x20
                    else
                        rdx_9 = 0x1f - temp0_2
                    
                    rdx_10 = 1 << ((not.d(rcx_15)).b & (0x20 - rdx_9))
                
                int32_t rax_13 = r14[9].d
                
                if (rax_13 == 0 || rax_13 s< rdx_10)
                    r14[9].d = rdx_10
                    sub_141e68940(r14)
            
            int64_t* j = *(r15_2 - 8)
            
            for (void* rdi_2 = &j[sx.q(*r15_2) * 3]; j != rdi_2; j = &j[3])
                sub_141e4c4c0(r14, &var_88, j, nullptr)
            
            r15_2 += 0x28
        while (r15_2 - 0x20 != i_1)
        
        r15_1 = var_78
    
    int32_t i_4 = var_70_1.d
    
    if (i_4 != 0)
        void* rbx_8 = r15_1 + 0x18
        int32_t i_2
        
        do
            sub_1408464b0(rbx_8)
            rbx_8 += 0x28
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        r15_1 = var_78
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    cond:0 = result != 0

result.b = cond:0
return result

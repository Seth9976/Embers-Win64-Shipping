// 函数: sub_141bc7eb0
// 地址: 0x141bc7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rsi = arg5
int32_t rbx = *(rsi + 0x18)
int64_t* r14 = arg2
void* var_e8 = rsi
sub_1405a4980(rsi, rbx + 1)
*(rsi + 0x18) += 1
void* r8 = rsi
void* rax_3 = *(rsi + 0x10)

if (rax_3 != 0)
    r8 = rax_3

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx)
uint64_t rbx_1
rbx_1.b = 0
int64_t rdx_3 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
char var_118 = 0
*(r8 + (rdx_3 << 2)) &= not.d(1 << (rbx & 0x1f).b)
int32_t i = 0
int32_t rcx_4 = *(rsi + 0x18) - 1
int32_t i_1 = 0

if (r14[1].d s> 0)
    int32_t r12_1 = rol.d(1, rcx_4.b)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rcx_4)
    int32_t var_ec_1 = r12_1
    int64_t rcx_6 = 0
    int64_t var_b0_1 = 0
    
    do
        rbx_1 = zx.q(arg8)
        int64_t* rdi_2 = *r14 + rcx_6
        bool cond:4_1 = *(arg1 + 0x770) == 0
        int64_t var_d8 = 0
        int32_t var_d0_1 = 0
        int64_t* rcx_7
        
        if (cond:4_1)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x768)
        
        (*(*rcx_7 + 0x48))(rcx_7, *rdi_2, &var_d8)
        void* rdx_7 = rsi
        void* rax_16 = *(rsi + 0x10)
        int32_t r14_2 = r14[1].d - 1
        
        if (rax_16 != 0)
            rdx_7 = rax_16
        
        void* rdx_8 = rdx_7 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)
        int32_t rcx_8 = *rdx_8
        int32_t rcx_9
        
        if (i == r14_2)
            rcx_9 = rcx_8 & not.d(r12_1)
        else
            rcx_9 = rcx_8 | r12_1
        
        *rdx_8 = rcx_9
        int32_t var_f0
        sub_140865c40(arg1 + 0x790, &var_f0, *rdi_2)
        int64_t rax_19 = sx.q(var_f0)
        void* const rcx_11
        
        if (rax_19.d == 0xffffffff)
            rcx_11 = nullptr
        else
            rcx_11 = *(arg1 + 0x790) + rax_19 * 0x18
        
        char* rax_21 = rcx_11 + 8
        
        if (rcx_11 == 0)
            rax_21 = nullptr
        
        uint64_t r15
        
        if (rax_21 != 0)
            r12_1 = zx.d(*rax_21)
            r15 = zx.q(rax_21[1])
        else
            r12_1.b = 0
            r15.b = 0
        
        void var_110
        
        if (rbx_1.b != 0)
            int64_t* rcx_12 = arg3
            int64_t rbx_2 = sx.q(rcx_12[1].d)
            int32_t rax_22 = (rbx_2 + 1).d
            rcx_12[1].d = rax_22
            
            if (rax_22 s> *(rcx_12 + 0xc))
                sub_1405a4d70(rcx_12)
                rcx_12 = arg3
            
            int32_t rdi_3 = 0
            int32_t var_f8_1 = 0
            *(*rcx_12 + (rbx_2 << 3)) = *rdi_2
            void* rbx_3 = nullptr
            void* var_100_1 = nullptr
            
            if (&var_110 != rsi)
                sub_14059a8e0(&var_110, *(rsi + 0x18))
                rdi_3 = *(rsi + 0x18)
                
                if (rdi_3 != 0)
                    void* rcx_15 = *(rsi + 0x10)
                    void* rdx_13 = rsi
                    
                    if (rcx_15 != 0)
                        rdx_13 = rcx_15
                    
                    void* rcx_16 = &var_110
                    
                    if (var_100_1 != 0)
                        rcx_16 = var_100_1
                    
                    memcpy(rcx_16, rdx_13, (zx.q(rdi_3 + 0x1f) u>> 5 << 2).d)
                
                rbx_3 = var_100_1
            
            void* var_68_1 = nullptr
            int64_t var_60_1 = 0
            void var_78
            sub_14059a8e0(&var_78, rdi_3)
            var_60_1.d = rdi_3
            
            if (rdi_3 != 0)
                void* rdx_15 = &var_110
                void* rcx_18 = &var_78
                
                if (rbx_3 != 0)
                    rdx_15 = rbx_3
                
                if (var_68_1 != 0)
                    rcx_18 = var_68_1
                
                memcpy(rcx_18, rdx_15, (zx.q(rdi_3 + 0x1f) u>> 5 << 2).d)
                rdi_3 = var_60_1.d
            
            int32_t rsi_1 = 0
            
            if (i_1 == r14_2)
                rsi_1 = 2
            
            int32_t var_58
            int32_t rsi_3 = rsi_1 | (var_58 & 0xfffffffc) | var_d0_1 s> 0
            var_58 = rsi_3
            int32_t var_54_1 = arg9
            
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
            
            int64_t rbx_4 = sx.q(arg4[1].d)
            int32_t rax_30 = (rbx_4 + 1).d
            arg4[1].d = rax_30
            
            if (rax_30 s> *(arg4 + 0xc))
                sub_1405c4ec0(arg4)
            
            int64_t rax_31 = *arg4
            int64_t rcx_21 = rbx_4 * 5
            *(rax_31 + (rcx_21 << 3) + 0x10) = 0
            void* rbx_5 = rax_31 + (rcx_21 << 3)
            
            if (var_68_1 == 0)
                memmove(rbx_5, &var_78, (var_68_1 + 0x10).d)
            
            int64_t rcx_23 = *(rbx_5 + 0x10)
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            *(rbx_5 + 0x10) = var_68_1
            *(rbx_5 + 0x1c) = var_60_1:4.d
            *(rbx_5 + 0x18) = rdi_3
            *(rbx_5 + 0x20) &= 0xfffffffc
            *(rbx_5 + 0x20) |= rsi_3 & 3
            *(rbx_5 + 0x24) = arg9
            
            if (*(arg1 + 0x490) != 0)
                int64_t* rcx_24 = *(arg1 + 0x488)
                
                if (rcx_24 != 0 && (*(*rcx_24 + 0x28))(rcx_24) != 0)
                    int64_t* rcx_25
                    
                    if (*(arg1 + 0x490) == 0)
                        rcx_25 = nullptr
                    else
                        rcx_25 = *(arg1 + 0x488)
                    
                    *(arg1 + 0x480) = (*(*rcx_25 + 0x48))(rcx_25)
            
            int32_t var_a8
            
            if (*(arg1 + 0x480) != 0 && (*(*(arg1 + 0x4f8) + 0x10))(arg1 + 0x4f8, rdi_2) != 0)
                sub_140b91690(arg6, &var_a8, rdi_2, nullptr)
            rsi = var_e8
            rbx_1 = zx.q(arg8)
        
        if (r12_1.b != 0 || r15.b != 0)
            if (rbx_1.b == 0 || r12_1.b == 0)
                rbx_1.b = 0
            else
                rbx_1.b = 1
            
            void* var_100_2 = nullptr
            int64_t var_f8_2 = 0
            int32_t rdi_5 = arg3[1].d
            
            if (&var_110 != rsi)
                sub_14059a8e0(&var_110, *(rsi + 0x18))
                int32_t rax_40 = *(rsi + 0x18)
                var_f8_2.d = rax_40
                
                if (rax_40 != 0)
                    void* rcx_29 = *(rsi + 0x10)
                    void* rdx_21 = rsi
                    
                    if (rcx_29 != 0)
                        rdx_21 = rcx_29
                    
                    void* rcx_30 = &var_110
                    
                    if (var_100_2 != 0)
                        rcx_30 = var_100_2
                    
                    memcpy(rcx_30, rdx_21, (zx.q(rax_40 + 0x1f) u>> 5 << 2).d)
            
            char rax_44 =
                sub_141bc7eb0(arg1, &var_d8, arg3, arg4, &var_110, arg6, arg7, rbx_1.b, rdi_5 - 1)
            r15 = zx.q(rax_44)
            
            if (r12_1.b != 0 || rax_44 != 0)
                int64_t* var_88 = rdi_2
                char var_116 = r12_1.b
                char* var_80_1 = &var_116
                char var_115_1 = r15.b
                void var_a4
                sub_141b70b60(arg7, &var_a4, &var_88, nullptr)
        
        if (var_118 != 0 || r12_1.b != 0 || r15.b != 0)
            rbx_1.b = 1
        else
            rbx_1.b = 0
        
        int64_t rcx_33 = var_d8
        var_118 = rbx_1.b
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        i = i_1 + 1
        r14 = arg2
        rcx_6 = var_b0_1 + 8
        r12_1 = var_ec_1
        i_1 = i
        var_b0_1 = rcx_6
    while (i s< r14[1].d)

int64_t rcx_35 = *(rsi + 0x10)

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rbx_1.b)

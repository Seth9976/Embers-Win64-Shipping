// 函数: sub_1421d6700
// 地址: 0x1421d6700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rdx = arg1
int32_t rdi = arg3
int32_t r14 = 0
void* var_88 = nullptr
int32_t var_80 = 0
int32_t var_7c = 0x20
int64_t r12 = sx.q(arg4)
int64_t rax_2 = *arg5
int64_t rcx = r12 * 3
int32_t var_134 = arg4
int32_t* rsi = *(rax_2 + (rcx << 3) + 8)
int64_t* rcx_1 = rax_2 + (rcx << 3)
int32_t var_128 = 0
int64_t* var_118 = rcx_1
void* r13 = &rsi[sx.q(rcx_1[2].d)]
void var_108

if (rsi != r13)
    do
        int64_t r15_1 = sx.q(*rsi)
        int64_t* rcx_4 = (r15_1 << 4) + *(rdx + 0x38)
        int64_t* rbx_1 = *(*(rdx + 0x28) + (r15_1 << 3))
        
        if ((*(rcx_4 + 0xd) & 2) == 0)
            void* rcx_5 = *rcx_4
            
            if (rcx_5 == 0)
                goto label_1421d6890
            
            void* rax_5 = *(rcx_5 + 0x50)
            
            if (rax_5 == 0 || *(rax_5 + 0x10) == 0)
                goto label_1421d6890
            
            int64_t* var_110
            int64_t rax_7
            
            if (r12 != 6)
                r14 |= 1
                void* rcx_7 = *sub_1423c0d30(rcx_5 + 0x30, &var_110)
                rax_7 = 0
                
                if (0 == *(rcx_7 + 8))
                    *(rcx_7 + 8) = 0
                else
                    rax_7 = *(rcx_7 + 8)
            
            if (r12 == 6 || ((rax_7 u>> 0x1a).b & 1) != 0)
                rdi.b = 1
            else
                rdi.b = 0
            
            if ((r14.b & 1) != 0)
                int64_t* rcx_8 = var_110
                r14 &= 0xfffffffe
                
                if (rcx_8 != 0)
                    rcx_8[9].d -= 1
                    
                    if (rcx_8[9].d == 1)
                        sub_140a2f6e0(rcx_8)
            
            if (rdi.b != 0)
                rdi = arg3
            label_1421d6890:
                char rax_11
                float zmm6_1
                float zmm7_1
                rax_11, zmm6_1, zmm7_1 = sub_1421887e0(rbx_1)
                
                if (rax_11 == 0)
                    void* rax_12 = rbx_1[0x14]
                    float zmm0_1
                    
                    if (rax_12 == 0)
                        zmm0_1 = zmm6_1
                    else
                        zmm0_1 = *(rax_12 + 0x98)
                    
                    (*(*rbx_1 + 0x338))(rbx_1, zmm7_1 * zmm0_1, zx.q(rdi), 0, arg3, arg1, var_128, 
                        arg5, var_118)
                    sub_14218e220(rbx_1, sub_142188fc0(rbx_1))
            else
                int64_t rbx_2 = sx.q(var_80)
                int32_t rax_10 = (rbx_2 + 1).d
                var_80 = rax_10
                
                if (rax_10 s> var_7c)
                    sub_1407c3770(&var_108, rbx_2.d)
                
                void* rcx_10 = &var_108
                
                if (var_88 != 0)
                    rcx_10 = var_88
                
                *(rcx_10 + (rbx_2 << 2)) = r15_1.d
            
            rdx = arg1
        
        rdi = arg3
        rsi = &rsi[1]
    while (rsi != r13)
    
    arg4 = var_134
    rcx_1 = var_118

if (arg4 != 6)
    int64_t rbx_3 = *arg5
    int64_t r13_2 = (r12 + 1) * 3
    int64_t var_120_1 = rbx_3
    int32_t r15_2 = 0
    
    if (var_80 s> 0)
        void* rdi_1 = rbx_3 + (r13_2 << 3)
        int64_t rsi_1 = 0
        
        do
            void* rax_14 = &var_108
            
            if (var_88 != 0)
                rax_14 = var_88
            
            sub_1421f9020(rcx_1, *(rax_14 + rsi_1))
            void* rcx_15 = &var_108
            
            if (var_88 != 0)
                rcx_15 = var_88
            
            int64_t rbx_4 = sx.q(*(rdi_1 + 0x10))
            int64_t r12_1 = sx.q(*(rcx_15 + rsi_1))
            void* r14_3 = (r12_1 << 4) + *(*(rbx_3 + (r13_2 << 3)) + 0x38)
            int32_t rax_17 = (rbx_4 + 1).d
            *(rdi_1 + 0x10) = rax_17
            
            if (rax_17 s> *(rdi_1 + 0x14))
                sub_1405a4cf0(rdi_1 + 8)
            
            void* rcx_17 = &var_108
            *(*(rdi_1 + 8) + (rbx_4 << 2)) = r12_1.d
            *(r14_3 + 8) = rbx_4.d
            rbx_3 = var_120_1
            
            if (var_88 != 0)
                rcx_17 = var_88
            
            r15_2 += 1
            int64_t rcx_18 = sx.q(*(rcx_17 + rsi_1))
            rsi_1 += 4
            *(*(arg1 + 0x38) + rcx_18 * 0x10 + 0xc) = var_134.b + 1
            rcx_1 = var_118
        while (r15_2 s< var_80)

int64_t result = 0
int32_t var_80_1 = 0

if (var_7c s< 0 && var_7c != 0)
    result = sub_1421fc910(&var_108, 0)

if (var_88 != 0)
    result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_158)
return result

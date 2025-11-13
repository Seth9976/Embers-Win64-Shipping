// 函数: sub_14236db70
// 地址: 0x14236db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r10 = arg5
int32_t rax_2 = *(arg4 + 0x668)
void* r14 = arg6
int64_t r12 = arg3
void* r13 = arg1
int64_t var_258 = arg3
int64_t* var_240 = r10
void* var_270 = r14
void* const rcx_3

if (rax_2 == *(arg4 + 0x694))
label_14236dc40:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_7 =
        *(r9 + ((sx.q((r12 u>> 0x20).d * 0x17 + r12.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14236dc40_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == r12)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14236dc40_2
        
        if (rax_7 == 0xffffffff)
        label_14236dc40_2:
            rcx_3 = nullptr

void* rax_8 = rcx_3 + 8

if (rcx_3 == 0)
    rax_8 = nullptr

int32_t var_278
int32_t result_1
int32_t rcx_6
int32_t* rdx_6
int32_t* r8_3

if (rax_8 != 0)
    int64_t rcx_7 = sx.q(*rax_8)
    r8_3 = *(arg4 + 0x6b0)
    result_1 = (rcx_7 + 4).d
    rdx_6 = r8_3 + rcx_7
    rcx_6 = *(r8_3 + rcx_7)
else
    int64_t rdi_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_9 = (rdi_1 + 0x10).d
    *(arg4 + 0x6b8) = rax_9
    
    if (rax_9 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    var_278 = rdi_1.d
    int64_t* rax_11 = rdi_1 + *(arg4 + 0x6b0)
    *rax_11 = 0
    rax_11[1] = 0
    sub_141cf16a0(arg4 + 0x660, &var_258, &var_278)
    int64_t rax_12 = sx.q(var_278)
    rcx_6 = 1
    r12 = var_258
    rdx_6 = rax_12 + *(arg4 + 0x6b0)
    result_1 = rax_12.d + 4
    r10 = var_240
    *rdx_6 = 1
    r8_3 = *(arg4 + 0x6b0)

int64_t* result = sx.q(result_1)
void* rsi_1 = arg4

if (rcx_6 != 0)
    *(result + r8_3) = 0
    *rdx_6 = 0

*(result + r8_3 + 8) = 0
int64_t var_250 = *(result + r8_3)
int32_t r15_1 = var_250.d
int32_t var_260 = 0

if (r15_1 s< *(r13 + 0x30))
    while (true)
        int64_t rbx_1 = sx.q(r15_1)
        int64_t* rdi_2 = *(*(r13 + 0x28) + (rbx_1 << 3))
        
        if (rdi_2 != 0)
            int64_t var_228
            sub_14234f710(&var_228, r10)
            sub_141e54560(&var_228, r13)
            int32_t var_1c4
            int64_t zmm0_1
            zmm0_1.d = var_1c4.d f* *(*(r13 + 0x48) + (rbx_1 << 2))
            int32_t rbx_2 = *(r14 + 8)
            var_1c4 = zmm0_1.d
            uint64_t rax_15 = sub_142365fb0(r12, rdi_2, r15_1)
            (*(*rdi_2 + 0x298))(rdi_2, arg2, rax_15, rsi_1, &var_228, var_270)
            
            if (*(var_270 + 8) s> rbx_2)
                void* const rcx_25
                
                if (*(arg4 + 0x668) == *(arg4 + 0x694))
                label_14236df22:
                    rcx_25 = nullptr
                else
                    void* r9_2 = arg4 + 0x698
                    void* r8_7 = *(r9_2 + 8)
                    
                    if (r8_7 != 0)
                        r9_2 = r8_7
                    
                    int32_t rax_23 = *(r9_2 + ((sx.q((r12 u>> 0x20).d * 0x17 + r12.d)
                        & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
                    
                    if (rax_23 == 0xffffffff)
                    label_14236df22_1:
                        rcx_25 = nullptr
                    else
                        int64_t r8_8 = *(arg4 + 0x660)
                        
                        while (true)
                            int64_t rdx_13 = sx.q(rax_23) * 3
                            rcx_25 = r8_8 + (rdx_13 << 3)
                            
                            if (*(r8_8 + (rdx_13 << 3)) == r12)
                                break
                            
                            rax_23 = *(rcx_25 + 0x10)
                            
                            if (rax_23 == 0xffffffff)
                                goto label_14236df22_2
                        
                        if (rax_23 == 0xffffffff)
                        label_14236df22_2:
                            rcx_25 = nullptr
                
                void* rax_24 = rcx_25 + 8
                
                if (rcx_25 == 0)
                    rax_24 = nullptr
                
                uint64_t rdx_16
                
                if (rax_24 != 0)
                    rdx_16 = zx.q(*rax_24)
                else
                    int64_t rsi_3 = sx.q(*(arg4 + 0x6b8))
                    int32_t rax_25 = (rsi_3 + 0x10).d
                    *(arg4 + 0x6b8) = rax_25
                    
                    if (rax_25 s> *(arg4 + 0x6bc))
                        sub_1405daba0(arg4 + 0x6b0)
                    
                    var_278 = rsi_3.d
                    int64_t* rax_27 = rsi_3 + *(arg4 + 0x6b0)
                    *rax_27 = 0
                    rax_27[1] = 0
                    sub_141cf16a0(arg4 + 0x660, &var_258, &var_278)
                    rdx_16 = sx.q(var_278)
                    *(rdx_16 + *(arg4 + 0x6b0)) = 1
                
                int64_t* rbx_6 = sx.q(rdx_16.d + 4) + *(arg4 + 0x6b0)
                *rbx_6 = var_250
                rbx_6[1].d = var_260
                rbx_6[1].d = (*(*rdi_2 + 0x2b8))(rdi_2, rax_15, arg4)
                result = sub_142351ee0(&var_228)
                break
            
            void var_b8
            sub_141c4f800(&var_b8)
            int64_t var_d0
            
            if (var_d0 != 0)
                sub_140a74f90(var_d0)
            
            void** const var_140_1 = &data_142d6a040
            int64_t var_e8
            
            if (var_e8 != 0)
                sub_140a74f90(var_e8)
            
            void var_138
            sub_1405ae180(&var_138)
            int64_t i = 2
            void var_158
            void* rsi_2 = &var_158
            
            do
                int32_t j_1 = *(rsi_2 - 8)
                rsi_2 -= 0x10
                void* rcx_16 = *rsi_2
                i -= 1
                
                if (j_1 != 0)
                    int64_t* rbx_3 = rcx_16 + 0x98
                    int32_t j
                    
                    do
                        int64_t rcx_17 = *rbx_3
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                        
                        rbx_3[-0xe] = &data_142d6a040
                        int64_t rcx_18 = rbx_3[-3]
                        
                        if (rcx_18 != 0)
                            sub_140a74f90(rcx_18)
                        
                        sub_1405ae180(&rbx_3[-0xd])
                        rbx_3 = &rbx_3[0x16]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rcx_16 = *rsi_2
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
            while (i != 0)
            
            r13 = arg1
            void var_188
            sub_141c4f9c0(&var_188)
            int64_t rcx_21 = var_228
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            r14 = var_270
        
        result = nullptr
        r15_1 += 1
        var_250:4.d = 0
        var_250.d = r15_1
        
        if (r15_1 s>= *(r13 + 0x30))
            break
        
        rsi_1 = arg4
        r10 = var_240

__security_check_cookie(rax_1 ^ &var_2a8)
return result

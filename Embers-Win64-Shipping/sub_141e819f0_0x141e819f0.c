// 函数: sub_141e819f0
// 地址: 0x141e819f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t rcx = 0
int32_t var_c4 = 1
void** var_88 = nullptr
int32_t rbx = *(arg1 + 0x1d8)
void* r9 = arg1 + 0x1c0
uint64_t i_3 = 0
int32_t var_7c = 0
void** r12 = nullptr
int32_t r13 = 0
int32_t var_c8 = 0
int32_t r8 = 0
void* var_c0 = r9
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (rbx != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141e81aa8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_b4.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_b4:4.d = rcx
            var_c8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e81aa8
        
        var_b4.d = rbx

int64_t* var_50 = arg1 + 0x1b0
int128_t zmm0 = var_c8.o
int128_t var_60 = 0xffffffff
int16_t var_90 = 0
void* result = zmm0.q
var_b8.o = zmm0
var_c8.o = (arg1 + 0x1b0).o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_a8 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* r15_1 = var_c8.q
        void** rsi_1 = sx.q(i) * 0x68
        void* r14_1 = *(rsi_1 + *r15_1)
        
        if (r14_1 != 0)
            sub_142378910(r14_1 + 0x28, arg2[0].d)
            int64_t rax_13 = *r15_1
            *(rsi_1 + rax_13 + 8) = *(r14_1 + 0x28)
            *(rsi_1 + rax_13 + 0x18) = *(r14_1 + 0x38)
            *(rsi_1 + rax_13 + 0x28) = *(r14_1 + 0x48)
            *(rsi_1 + rax_13 + 0x38) = *(r14_1 + 0x58)
            *(rsi_1 + rax_13 + 0x48) = *(r14_1 + 0x68)
            *(rsi_1 + rax_13 + 0x58) = *(r14_1 + 0x78)
            
            if (*(r14_1 + 0xb0) == 0)
                int64_t rbx_1 = sx.q(i_3.d)
                i_3 = zx.q((rbx_1 + 1).d)
                int32_t i_4 = i_3.d
                
                if (i_3.d s> r13)
                    sub_1405a4d70(&var_88)
                    r13 = var_7c
                    i_3 = zx.q(i_4)
                    r12 = var_88
                
                r12[rbx_1] = r14_1
        
        var_b4:4.d &= not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
        result = var_b8.q
        i = i_2
    while (i s< *(result + 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        result = sub_141e77b10(arg1 + 0x1b0, *(arg1 + 0x1b8) - *(arg1 + 0x1e4), 1)
    
    if (i_3.d s> 0)
        void** rsi_2 = r12
        void* r15_2 = arg_8
        uint64_t i_1
        
        do
            void* rbx_2 = *rsi_2
            sub_141e7acd0(arg1 + 0x1b0, &arg_8, rbx_2)
            int64_t rax_16 = sx.q(arg_8.d)
            
            if (rax_16.d == 0xffffffff)
                result = nullptr
            else
                result = rax_16 * 0x68 + *(arg1 + 0x1b0)
            
            int32_t* r8_3 = result + 8
            
            if (result == 0)
                r8_3 = nullptr
            
            if (rbx_2 != 0 && r8_3 != 0)
                result = sub_141e82f90(r15_2, rbx_2, r8_3)
            
            rsi_2 = &rsi_2[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r12 != 0)
        return sub_140a74f90(r12)

return result

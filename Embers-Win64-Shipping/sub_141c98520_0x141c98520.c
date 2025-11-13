// 函数: sub_141c98520
// 地址: 0x141c98520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int32_t rdx = arg2[1].d
void* r14 = nullptr
int32_t i_4 = 0
void* var_58 = nullptr
int64_t var_50 = 0

if (rdx s> 0)
    sub_14061cd70(&var_58, rdx)
    rdx = arg2[1].d
    i_4 = var_50.d
    r14 = var_58

int64_t* rbx_1 = *arg2
int32_t result = 0
void* r15_2 = &rbx_1[sx.q(rdx) * 2]
uint64_t var_68 = 0
int32_t var_60 = 0
int32_t result_1 = 0

if (rbx_1 != r15_2)
    while (true)
        int32_t var_60_1 = 0
        
        if (result s< 0 && result != 0)
            sub_1405947f0(&var_68, 0)
        
        uint64_t rcx_2 = var_68
        
        if (rcx_2 != 0)
            *rcx_2 = 0
        
        result = sub_140bbcf00(rbx_1, &var_68, nullptr)
        
        if (result.b != 0)
            int16_t* const r9_1 = &data_142d40450
            int64_t rdx_2 = 0
            
            if (var_60_1 != 0)
                r9_1 = var_68
            
            uint32_t i = zx.d(*r9_1)
            uint64_t rax_1 = zx.q(i) & 0xffffffc0
            
            if (rax_1.d == 0x40)
                rdx_2 = 0x5000000010000001
            
            result = i & 0x3f
            
            if (not(test_bit(rdx_2 | (sbb.q(rax_1, rax_1, i u< 0x40) & 0xd40054cf00002601), 
                    zx.q(result.b))))
                uint64_t rax_6
                int64_t rdx_4
                
                do
                    i = zx.d(r9_1[1])
                    r9_1 = &r9_1[1]
                    rdx_4 = 0
                    rax_6 = zx.q(i) & 0xffffffc0
                    
                    if (rax_6.d == 0x40)
                        rdx_4 = 0x5000000010000001
                    
                    result = i & 0x3f
                while (not(test_bit(rdx_4 | (sbb.q(rax_6, rax_6, i u< 0x40) & 0xd40054cf00002601), 
                    zx.q(result.b))))
            
            if (i.w == 0)
                int64_t i_5 = sx.q(i_4)
                i_4 = (i_5 + 1).d
                var_50.d = i_4
                
                if (i_4 s> var_50:4.d)
                    sub_1405a4f90(&var_58)
                    i_4 = var_50.d
                    r14 = var_58
                
                result = sub_140596d10((i_5 << 4) + r14, rbx_1)
        
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == r15_2)
            break
        
        result = result_1
    
    rsi = arg1

if (i_4 s> 0)
    EnterCriticalSection(rsi + 8)
    int32_t rax_10 = *(rsi + 0x48)
    int32_t rdx_8 = rax_10 + i_4
    
    if (rdx_8 s> *(rsi + 0x4c))
        sub_1405a5130(rsi + 0x40, rdx_8)
        rax_10 = *(rsi + 0x48)
    
    void* r12_1 = r14
    int32_t i_3 = i_4
    int64_t* rsi_1 = *(rsi + 0x40) + sx.q(rax_10) * 0x18
    int32_t i_1
    
    do
        int32_t r14_1 = *(r12_1 + 8)
        uint64_t r15_3 = 0
        uint64_t var_48 = 0
        int64_t r13_1 = *r12_1
        int32_t rax_13
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_48, r14_1, 0)
            r15_3 = var_48
            memcpy(r15_3, r13_1, r14_1 * 2)
            int32_t var_3c
            rax_13 = var_3c
        else
            rax_13 = 0
        
        *rsi_1 = r15_3
        rsi_1[1].d = r14_1
        *(rsi_1 + 0xc) = rax_13
        var_48 = 0
        int32_t var_40_1
        var_40_1.q = 0
        sub_140a464c0()
        int16_t* const r8_3
        
        if (rsi_1[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *rsi_1
        
        result = (*(data_14399ea08 + 0xd0))(&data_14399ea08, &rsi_1[2], r8_3)
        rsi_1 = &rsi_1[3]
        r12_1 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    *(arg1 + 0x48) += i_4
    
    if (rsi != -8)
        result = LeaveCriticalSection(rsi + 8)

uint64_t rcx_16 = var_68

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

void* rsi_2 = var_58
void* rbx_3 = rsi_2

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_17 = *rbx_3
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        rbx_3 += 0x10
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (rsi_2 == 0)
    return result

return sub_140a74f90(rsi_2)

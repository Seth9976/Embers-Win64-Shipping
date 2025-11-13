// 函数: sub_1413a4370
// 地址: 0x1413a4370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg2.b

while (*(arg1 + 0xe0) != 0)
    arg2, arg3 = sub_14141c8d0(*(arg1 + 0xe0), arg2, arg3)

void* rcx_2 = *(arg1 + 0xf0) + 0x2120
int128_t var_28 = *(arg1 + 0x58)
sub_1413a3d10(rcx_2, &var_28)
var_28:8.d = 0xffffffff
bool cond:1 = *(arg1 + 0x124) == 0xffffffff
var_28.q = 0
*(arg1 + 0x58) = var_28

if (not(cond:1) && sub_1411a4ac0(data_143f0f1a0, *(*(arg1 + 0xf0) + 8)) != 0)
    sub_14118bf60(*(arg1 + 0xf0) + 0x17d0, *(arg1 + 0x124), *(arg1 + 0x128))

if (*(*(arg1 + 8) + 0x39) s< 0)
    void* rdi_1 = *(arg1 + 0xf0)
    int64_t* r10_1 = *(rdi_1 + 0x1000)
    uint64_t r9_1 = sx.q(*(rdi_1 + 0x1008))
    int64_t* rcx_6 = r10_1
    void* rdx_3 = &r10_1[r9_1]
    
    if (r10_1 != rdx_3)
        do
            if (*rcx_6 == arg1)
                int32_t rcx_8 = ((rcx_6 - r10_1) s>> 3).d
                
                if (rcx_8 != 0xffffffff)
                    int32_t rax_6 = r9_1.d - rcx_8 - 1
                    
                    if (rax_6 s>= 1)
                        rax_6 = 1
                    
                    if (rax_6 != 0)
                        memcpy(&r10_1[sx.q(rcx_8)], &r10_1[sx.q(r9_1.d - rax_6)], rax_6 << 3)
                        r9_1 = zx.q(*(rdi_1 + 0x1008))
                    
                    *(rdi_1 + 0x1008) = (r9_1 - 1).d
                    sub_1405c53d0(rdi_1 + 0x1000)
                
                break
            
            rcx_6 = &rcx_6[1]
        while (rcx_6 != rdx_3)

uint64_t result = *(arg1 + 8)
*(arg1 + 0x68) = 0

if (*(result + 0x32) == 2)
    result = zx.q(*(arg1 + 0x120))
    
    if ((result.b & 4) == 0)
        result.b |= 4
        *(arg1 + 0x120) = result.b

if (rbp != 0)
    int32_t rcx_11 = *(arg1 + 0x110)
    
    if (((rcx_11 + 1) & 0x7fffffff) != 0)
        void* r8_4 = *(arg1 + 0xf0) + 0xe68
        void* rax_11 = *(r8_4 + 0x10)
        
        if (rax_11 != 0)
            r8_4 = rax_11
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_11)
        int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r8_4 + (rdx_7 << 2)) &= not.d(1 << (rcx_11.b & 0x1f))
    
    if ((*(arg1 + 0x120) & 1) != 0)
        sub_1409740e0(*(arg1 + 0xf0) + 0xe88, arg1)
        *(arg1 + 0x120) &= 0xfe
    
    sub_1405d16e0(arg1 + 0x70, nullptr)
    int32_t i_1 = *(arg1 + 0x50)
    void* rdi_2 = *(arg1 + 0x48)
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_141413140(rdi_2)
            rdi_2 += 0xb0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x50) = 0
    
    if (*(arg1 + 0x54) != 0)
        sub_140a05f70(arg1 + 0x48, 0)
    
    *(arg1 + 0x40) = 0
    
    if (*(arg1 + 0x44) != 0)
        sub_1405c55e0(arg1 + 0x38, 0)
    
    result = sub_1413a3930(arg1)

if ((*(arg1 + 0x120) & 8) != 0)
    result = sub_14150ec40(__iob_func(), arg1)
    *(arg1 + 0x120) &= 0xf7

return result

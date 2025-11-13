// 函数: sub_142c1bc50
// 地址: 0x142c1bc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x90)
int128_t* const rdi = &data_14369a5d0
uint16_t rdx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_2

if (0 != rdx * 0x100 + r8_1.w)
    rcx_2 = (zx.q(rdx.b) << 8) + arg1 + r8_1
else
    rcx_2 = &data_14369a5d0

int32_t rdx_1 = *(*(rbp + 0x70) + zx.q(*(rbp + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_2, rdx_1)
label_142c1bcf2:
    
    if (result != 0xffffffff)
        int32_t r8_6 = *(rbp + 0x5c)
        void* rdx_2 = *(arg2 + 8)
        *arg2 = r8_6
        arg2[0xe] = 1
        arg2[0xf] = *(*(rdx_2 + 0x90) + 0x60)
        void* r9_1 = *(rdx_2 + 0x90)
        char rdx_3
        
        if (r8_6 != *(r9_1 + 0x5c))
            rdx_3 = 0
        else
            rdx_3 = *(*(r9_1 + 0x70) + zx.q(*(r9_1 + 0x5c)) * 0x14 + 0xf)
        
        arg2[7].b = rdx_3
        
        if (sub_142c22680(arg2).b != 0)
            void* rax_6
            
            if (result u< (zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9)))
                rax_6 = arg1 + ((zx.q(result) + 5) << 1)
            else
                rax_6 = &data_14369a5d0
            
            uint16_t rdx_4 = zx.w(*rax_6)
            uint64_t r8_7 = zx.q(*(rax_6 + 1))
            
            if (0 != rdx_4 * 0x100 + r8_7.w)
                rdi = (zx.q(rdx_4.b) << 8) + arg1 + r8_7
            
            return sub_142c1c100(rdi, arg2, arg1 + 4, *arg2)
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_2, rdx_1)
    goto label_142c1bcf2

result.b = 0
return result

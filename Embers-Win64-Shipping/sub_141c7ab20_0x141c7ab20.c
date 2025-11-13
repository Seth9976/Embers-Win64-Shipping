// 函数: sub_141c7ab20
// 地址: 0x141c7ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg3 + 0x13) - 0xa u<= 2
void* rbp = arg3
uint32_t r8 = zx.d(*(arg3 + 0x2d))
uint32_t rax_1 = zx.d(*(rbp + 0x2e))
int128_t var_88
__builtin_memset(&var_88, 0, 0x24)
uint64_t r15
r15.b = cond:0
uint64_t r12 = 0
char arg_8 = r15.b
uint32_t r8_4 = (r8 << 8 | rax_1) << 8 | zx.d(*(rbp + 0x2f))
int64_t rcx_5 = ((zx.q(*(rbp + 0x2a)) << 8 | zx.q(*(rbp + 0x2b))) << 8 | zx.q(*(rbp + 0x2c))) + arg2

if (r8_4 != 0)
    var_88.q = rcx_5
    var_88:8.q = rcx_5
    int64_t var_78_1 = zx.q(r8_4) + rcx_5
    int64_t var_70
    var_70.d = r8_4

int32_t var_60 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x11)
void* var_40 = nullptr
sub_141c7af20(&var_88, &var_60)
sub_141c7c020(arg1 + 0xf0, (zx.d(*(rbp + 0x30)) << 8 | zx.d(*(rbp + 0x31))) << r15.b)
int32_t rdi = 0
int32_t i = 0

if ((zx.d(*(rbp + 0x30)) << 8 | zx.d(*(rbp + 0x31))) u> 0)
    do
        for (int32_t j = 0; j u< 0x20; )
            char rcx_13 = j.b
            j += 4
            rdi ^= sub_141c79cd0(&var_88, &var_60) << rcx_13
        
        uint32_t rbx_2 = rdi u>> 1
        
        if (r15.b == 0)
            *(*(arg1 + 0xf0) + (zx.q(i) << 2)) =
                (((rdi * 2) ^ rbx_2 ^ rdi) & 0x55555555) ^ (rdi * 2) ^ rdi
        else
            int32_t r15_1 = 8
            int32_t rbx_7 = ((not.d(rbx_2 ^ rdi) ^ not.d(rdi)) & 0x55555555) ^ not.d(rdi)
            uint64_t rax_14 = zx.q(i * 2)
            uint64_t rbp_1 = zx.q(rax_14.d) << 2
            
            do
                int64_t rdx_6 = *(arg1 + 0xf0)
                char r10_1 = (r12 * 2).b
                char r11_1 = (r12 << 3).b
                uint32_t r8_6 = rbx_7 u>> r10_1
                char r9_2 = r15_1.b & 0xf
                *(rdx_6 + rbp_1) |= ((r8_6 & 1) << 0x10 | (r8_6 u>> 1 & 1)) << r9_2
                int32_t* rdx_7 = *(arg1 + 0xf0)
                uint32_t r8_10 = rbx_7 u>> r11_1
                char r9_4 = (r15_1.b + 4) & 0xf
                rdx_7[rax_14 | 1] |= ((r8_10 & 1) << 0x10 | (r8_10 u>> 1 & 1)) << r9_2
                int64_t rdx_8 = *(arg1 + 0xf0)
                uint32_t r8_14 = rbx_7 u>> (r10_1 | 8)
                *(rdx_8 + rbp_1) |= ((r8_14 & 1) << 0x10 | (r8_14 u>> 1 & 1)) << r9_4
                int32_t* rdx_9 = *(arg1 + 0xf0)
                uint32_t r8_18 = rbx_7 u>> (r11_1 | 2)
                char r9_6 = (r15_1.b - 8) & 0xf
                rdx_9[rax_14 | 1] |= ((r8_18 & 1) << 0x10 | (r8_18 u>> 1 & 1)) << r9_4
                int64_t rdx_10 = *(arg1 + 0xf0)
                uint32_t r8_22 = rbx_7 u>> (r10_1 | 0x10)
                *(rdx_10 + rbp_1) |= ((r8_22 & 1) << 0x10 | (r8_22 u>> 1 & 1)) << r9_6
                int32_t* rdx_11 = *(arg1 + 0xf0)
                uint32_t r8_26 = rbx_7 u>> (r11_1 | 4)
                char r9_8 = (r15_1.b - 4) & 0xf
                rdx_11[rax_14 | 1] |= ((r8_26 & 1) << 0x10 | (r8_26 u>> 1 & 1)) << r9_6
                int64_t rdx_12 = *(arg1 + 0xf0)
                uint32_t r8_30 = rbx_7 u>> (r10_1 | 0x18)
                r12 = zx.q(r12.d + 1)
                r15_1 += 1
                *(rdx_12 + rbp_1) |= ((r8_30 & 1) << 0x10 | (r8_30 u>> 1 & 1)) << r9_8
                int32_t* rdx_13 = *(arg1 + 0xf0)
                uint32_t r8_34 = rbx_7 u>> (r11_1 | 6)
                rdx_13[rax_14 | 1] |= ((r8_34 & 1) << 0x10 | (r8_34 u>> 1 & 1)) << r9_8
            while (r12.d u< 4)
            
            rbp = arg3
            r12 = 0
            r15 = zx.q(arg_8)
        
        i += 1
    while (i u< (zx.d(*(rbp + 0x30)) << 8 | zx.d(*(rbp + 0x31))))

if (var_40 != 0)
    int64_t rcx_39 = *(var_40 + 0xa8)
    
    if (rcx_39 != 0)
        sub_141c799d0(rcx_39 - 8)
    
    int64_t rcx_41 = *(var_40 + 0xb8)
    
    if (rcx_41 != 0)
        sub_141c799d0(rcx_41 - 8)
    
    sub_141c799d0(var_40)

int64_t rcx_44 = var_58

if (rcx_44 != 0)
    sub_141c799d0(rcx_44)

uint32_t result
result.b = 1
return result

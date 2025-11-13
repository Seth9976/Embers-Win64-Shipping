// 函数: sub_140899990
// 地址: 0x140899990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rax_2 = *(arg1 + 0xf8)
uint64_t r12 = zx.q(arg1[3])
uint16_t rcx = arg1[1].w
uint32_t r9 = zx.d(rcx)
int64_t* rbx = *rax_2
int16_t var_48 = 0
int16_t var_58

if (not(test_bit(rcx, 8)))
    var_58 = 1
else
    var_58 = 3

uint32_t r8 = zx.d(*(arg1 + 6))
int32_t rdx = *arg1
rcx &= 0xff
uint16_t var_4a = rcx
int16_t var_56 = r8.w
int32_t var_54 = rdx
uint32_t rax_3 = zx.d((rcx u>> 3) * r8.w)
int16_t var_4c = rax_3.w
int32_t var_50 = rax_3 * rdx
char rax_5 = 0

if (r9.w == 8)
    rax_5 = -0x80

*(arg1 + 7) = rax_5
arg1[3] = (r9 u>> 3 & 0x1f) * zx.d(arg1[2].w) * r8
int64_t r15 = *rbx
HWND rdx_1
int64_t r8_1

if (arg2 == 0)
    rdx_1 = GetDesktopWindow()
    r8_1 = 1
else
    r8_1 = 2
    rdx_1 = arg2

int32_t rax_8 = (*(r15 + 0x30))(rbx, rdx_1, r8_1)
int64_t result

if (rax_8 == 0)
    int32_t var_80 = 0x28
    int32_t rax_9 = 0x14000
    
    if (arg2 == 0)
        rax_9 = 0x18000
    
    int32_t var_7c_1 = rax_9
    uint32_t rax_10 = (r12 << 3).d
    int128_t var_68_1 = zx.o(0)
    
    if (rax_10 - 4 u> 0xffffffb)
        result = sub_14089b010()
    else
        int32_t var_74_1 = 0
        int16_t* var_70_1 = &var_58
        int32_t rax_13 = (*(*rbx + 0x18))(rbx, &var_80, &rax_2[1], 0)
        
        if (rax_13 == 0)
            int64_t* rcx_5 = rax_2[1]
            (*(*rcx_5 + 0x70))(rcx_5, &var_58)
            int64_t* rcx_6 = rax_2[1]
            int32_t var_98
            int32_t var_94
            int64_t var_90
            int64_t var_88
            
            if ((*(*rcx_6 + 0x58))(rcx_6, 0, zx.q(rax_10), &var_90, &var_98, &var_88, &var_94, 2)
                    == 0)
                memset(var_90, zx.d(*(arg1 + 7)), zx.q(var_98))
                int64_t* rcx_8 = rax_2[1]
                int32_t* var_b8_1
                var_b8_1.d = var_94
                (*(*rcx_8 + 0x98))(rcx_8, var_90, zx.q(var_98), var_88, var_b8_1)
            
            result = 8
        else
            result = sub_14089b0c0("DirectSound CreateSoundBuffer", rax_13)
else
    result = sub_14089b0c0("DirectSound SetCooperativeLevel", rax_8)

__security_check_cookie(rax_1 ^ &var_d8)
return result

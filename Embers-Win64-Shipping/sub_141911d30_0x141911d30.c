// 函数: sub_141911d30
// 地址: 0x141911d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t r12 = arg4

if (arg2 != 0)
    int64_t rcx = 0
    int64_t* rax_1 = arg1 + 0x318
    
    while (*rax_1 != 0)
        rcx += 1
        rax_1 = &rax_1[1]
        
        if (rcx s>= 8)
            break

int128_t zmm0 = *(arg1 + 0x2d8)
char rbp = *(arg1 + 0x2d4)
char arg_8 = 0

if (*(arg1 + 0x15c00) != 0)
    void* rax_2 = *(arg1 + 0x15c18)
    
    if (rax_2 != 0)
        *(rax_2 + 0x10) += 1

uint64_t rdx

if (*(arg1 + 0x15b50) != 1)
    int32_t rcx_2 = 0x14a20
    
    if (sub_141957ff0(*(arg1 + 0x15bb8)) == 1)
        rcx_2 = 0x152b8
    
    rdx = zx.q(rcx_2)
else
    rdx = 0x152b8

void* r13 = rdx + arg1
sub_141931440(arg1, r13)

if (rbp != 0 || *(arg1 + 0x2e8) != 0 || *(arg1 + 0x2ec) != 0 || *(arg1 + 0x2f0) != *(arg1 + 0x304)
        || *(arg1 + 0x2f4) != *(arg1 + 0x308))
    *(arg1 + 0x2d4) = 0
    *(arg1 + 0x2d8) = 0
    *(arg1 + 0x2e0) = 0
    arg_8 = 1

uint32_t result
int64_t rcx_5
int64_t r9
result, rcx_5, r9 = sub_141917e30(arg1, r13)
int64_t r14
r14.b = 0

if (arg2 != 0)
    r14.b = 4
    int32_t rbp_1 = 0
    
    if (arg3 s> 0)
        void* rdi_1 = r13 + 0x88
        
        do
            result = *rdi_1 & 0xf
            
            if (result.b != 0xf)
                r9.b = 1
                result, rcx_5, r9 = data_143effbb8(zx.q(rbp_1), 1, 1, r9, 1)
                *rdi_1 |= 0xf
            
            rbp_1 += 1
            rdi_1 += 0x24
        while (rbp_1 s< arg3)

char arg_28

if (arg_28 != 0 && *(arg1 + 0x398) != 0)
    r14.b |= 1
    
    if (*(r13 + 0x31) == 0)
        rcx_5.b = 1
        result = data_143eff9d8(rcx_5)
        *(r13 + 0x31) = 1

char arg_38

if (arg_38 != 0 && *(arg1 + 0x398) != 0)
    r14.b |= 2
    
    if (*(r13 + 0x60) != 0xffffffff)
        result = data_143effb20(0xffffffff)
        *(r13 + 0x60) = 0xffffffff

if ((r14.b & 4) != 0 && arg3 s> 0)
    do
        result = data_143effb98(0x1800, zx.q(rsi), r12)
        rsi += 1
        r12 += 0x10
    while (rsi s< arg3)

if ((r14.b & 3) != 0)
    int32_t rcx_8 = zx.d(r14.b) & 3
    arg_38.d = arg5
    arg_28.d = arg6
    
    if (rcx_8 == 1)
        result = data_143effb98(0x1801, 0, &arg_38)
    else if (rcx_8 == 2)
        result = data_143effba0(0x1802, 0, &arg_28)
    else if (rcx_8 == 3)
        result = data_143effbb0(0x84f9, 0)

if (arg_8 != 0)
    *(arg1 + 0x2d8) = zmm0.d
    *(arg1 + 0x2dc) = zmm0:4.d
    *(arg1 + 0x2e0) = zmm0:8.d
    result = zmm0:0xc.d
    *(arg1 + 0x2e4) = result
    *(arg1 + 0x2d4) = rbp

return result

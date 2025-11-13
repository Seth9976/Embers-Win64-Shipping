// 函数: sub_14102ef10
// 地址: 0x14102ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t var_48 = __security_cookie ^ &var_e8
char r14 = 0
int64_t* rdi = arg4
int32_t r12 = arg2
int64_t* rcx

if (arg4 != 0)
    rcx = *arg4

uint64_t result
uint64_t result_2

if (arg4 == 0 || rcx == 0)
    result_2 = nullptr
else
    result, arg4 = (*(*rcx + 0x48))(rcx)
    result_2 = result
    
    if (result != 0 && data_1439c7a34 u> 1)
        uint64_t result_3 = *(result + 0xe8)
        
        if (result_3 != result)
            result_2 = result_3
        
        if (result_2 != 0)
            while (*(result_2 + 8) != *(arg1 + 0x138))
                result_2 = *(result_2 + 0xb8)
                
                if (result_2 == 0)
                    break

result.b = 0
void* r13 = nullptr
char result_1 = 0

if (result_2 != 0)
    int64_t rax_2 = sx.q(*(rdi + 0xc))
    *(arg1 + 0x3b6c) = rax_2.d
    int64_t* rax_4
    
    if (rax_2.d u> 0x22)
        rax_4 = 0x800000110
    else
        switch (rax_2)
            case 0, 2, 0x20, 0x22
                rax_4 = 0x118
            case 1, 0x21
                rax_4 = 0x120
            case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x13, 0x14, 0x15, 0x16, 0x17, 
                    0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                rax_4 = 0x800000110
            case 0x10, 0x12
                rax_4 = 0x128
            case 0x11
                rax_4 = 0x130
    
    r13 = *(rax_4 + result_2)
    result, arg4 = sub_141018440(arg1, result_2 + 0x48)
    result.b = 0

if (*(arg1 + 0x3548) != r13)
    result.b = 1
    *(arg1 + 0x3550) = result_2
    result_1 = 1
    *(arg1 + 0x3548) = r13

int32_t* r15_1 = arg3 + 0xc
void* var_88
int64_t rdx_1 = &var_88 - arg1
void* rdi_1 = arg1 + 0x3508
int64_t var_a0 = rdx_1

for (int32_t i = 0; i u< 8; )
    int64_t rbx_1 = 0
    
    if (i u< r12)
        int64_t* rcx_4 = *(r15_1 - 0xc)
        
        if (rcx_4 != 0)
            int32_t rbx = r15_1[-1]
            int32_t r12_1 = *r15_1
            void* rax_6 = (*(*rcx_4 + 0x48))(rcx_4)
            void* rdx_2 = rax_6
            
            if (rax_6 != 0 && data_1439c7a34 u> 1)
                void* rcx_5 = *(rax_6 + 0xe8)
                
                if (rcx_5 != rax_6)
                    rdx_2 = rcx_5
                
                if (rdx_2 != 0)
                    while (*(rdx_2 + 8) != *(arg1 + 0x138))
                        rdx_2 = *(rdx_2 + 0xb8)
                        
                        if (rdx_2 == 0)
                            break
            
            if (*(rdx_2 + 0x110) != 0)
                rbx = r12_1 + *(rdx_2 + 0x114) * rbx
            
            if (rbx s>= *(rdx_2 + 0x108))
                rbx_1 = 0
            else
                void* rcx_6 = rdx_2 + 0xf8
                void* rax_10 = *(rcx_6 + 8)
                
                if (rax_10 != 0)
                    rcx_6 = rax_10
                
                rbx_1 = *(rcx_6 + (sx.q(rbx) << 3))
            
            arg4 = sub_141018440(arg1, rdx_2 + 0x48)
            result = zx.q(result_1)
            rdx_1 = var_a0
            r12 = arg2
    
    *(rdx_1 + rdi_1 - 0x3508) = rbx_1
    
    if (*rdi_1 != rbx_1)
        result.b = 1
        *rdi_1 = rbx_1
        result_1 = 1
    
    i += 1
    r15_1 = &r15_1[6]
    rdi_1 += 8

int32_t rdx_4 = *(arg1 + 0x3558)

if (rdx_4 != r12)
    *(arg1 + 0x3558) = r12
    arg4 = sub_14105abc0(arg1 + 0x250, r12, arg1 + 0x3508, *(arg1 + 0x3548))
    result = sub_141039000(arg1 + 0x250)
else if (result.b != 0)
    arg4 = sub_14105abc0(arg1 + 0x250, rdx_4, arg1 + 0x3508, *(arg1 + 0x3548))
    result = sub_141039000(arg1 + 0x250)

void* rcx_10 = var_88
int128_t zmm1
int128_t zmm2

if (rcx_10 != 0)
    void* rdx_5 = *(*(rcx_10 + 0x28) + 0x10)
    int64_t var_a0_1 = 0
    int32_t rax_13 = *(rcx_10 + 0x4c)
    int32_t r8_1
    int32_t r9_1
    
    if (rax_13 s< 4)
        r9_1 = 0
        r8_1 = 0
    else if (rax_13 s<= 7)
        r8_1 = *(rdx_5 + 0x98)
        r9_1 = *(rdx_5 + 0xa0)
        
        if (rax_13 - 4 u<= 1)
            r14 = (*(rcx_10 + 0x50)).b
    else if (rax_13 != 8)
        r9_1 = 0
        r8_1 = 0
    else
        r8_1 = *(rdx_5 + 0x98)
        r9_1 = *(rdx_5 + 0xa0)
        r14 = (*(rcx_10 + 0x50)).b
    
    uint32_t r8_2 = r8_1 u>> r14
    arg4 = zx.q(r9_1 u>> r14)
    var_a0_1.d = r8_2
    var_a0_1:4.d = arg4.d
    zmm2.d = float.s(var_a0_1 u>> 0x20)
    zmm1.d = float.s(zx.q(r8_2))
label_14102f24d:
    int512_t zmm3
    zmm3.o = zx.o(0)
    int32_t var_b8_1 = 0x3f800000
    result = sub_141031150(arg1, zx.o(0), zx.o(0), arg4.d, zmm1.d, zmm2.d)
else if (r13 != 0)
    void* rcx_12 = *(*(r13 + 0x28) + 0x10)
    zmm2.d = float.s(zx.q(*(rcx_12 + 0xa0)))
    int64_t rax_19 = *(rcx_12 + 0x98)
    zmm1.d = float.s(rax_19)
    
    if (rax_19 s< 0)
        zmm1.d = zmm1.d f+ 1.84467441e+19f
    
    goto label_14102f24d
__security_check_cookie(var_48 ^ &var_e8)
return result

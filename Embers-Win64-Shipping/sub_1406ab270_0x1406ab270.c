// 函数: sub_1406ab270
// 地址: 0x1406ab270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x7c)

if (rax != 0x5c)
    if (rax != 0x5b)
        if (rax == 0x5d || rax == 0xffffffff)
            return 0
        
        *(arg1 + 0x74) = sx.d(arg1[0xf].b)
        sub_1406aec20(arg1)
        return 1
    
    sub_1406aec20(arg1)
    int64_t rdi = sx.q(*(arg1 + 0x7c))
    
    if (rdi.d u> 0x3d || not(test_bit(0x2400400000000000, rdi)))
        *(arg1 + 0x74) = 0x5b
        return 1
    
    sub_1406aec20(arg1)
    sub_1406ac5b0(arg1, rdi.d)
    return 2

char* rcx = *arg1
int64_t rax_1 = arg1[2]

if (rcx != rax_1)
    if (*rcx == 0x5c)
        void* rdx_1 = &rcx[1]
        rcx = rdx_1
        
        if (rdx_1 == rax_1)
            rcx = *arg1
        else
            char r8_1 = (arg1[0x10].d).b
            
            if (((r8_1 & 8) != 0 || *rdx_1 - 0x28 u> 1)
                    && ((r8_1 & 0x10) != 0 || ((*rdx_1 - 0x7b) & 0xfd) != 0))
                rcx = *arg1
    
    *arg1 = &rcx[1]

sub_1406af960(arg1)
int32_t rax_5 = arg1[0x10].d

if (test_bit(rax_5, 0x15))
    if (not(test_bit(rax_5, 0xe)) || arg1[0xf].b != 0x5c)
        if (test_bit(rax_5, 0x11) && sub_1406aade0(arg1, 0) != 0)
            return 2
        
        if (sub_1406aba60(arg1) == 0)
            int32_t rcx_6
            rcx_6.b = sub_1406aae90(arg1) != 0
            return zx.q(rcx_6)
        
        if (*(arg1 + 0x74) != 0)
            sub_1406ad7b0(arg1, error_escape)
            noreturn
    else
        *(arg1 + 0x74) = 0x5c
        sub_1406aec20(arg1)
    
    return 1

char rax_12

if (test_bit(rax_5, 0x10))
    rax_12 = sub_1406ac760(arg1, arg1[0xf].b)

if (not(test_bit(rax_5, 0x10)) || rax_12 == 0)
    if ((arg1[0x10].d & 0x8000) == 0)
        *(arg1 + 0x74) = 0x5c
        return 1
    
    char rax_13 = arg1[0xf].b
    
    if (rax_13 != 0x61)
        if (rax_13 != 0x62)
            *(arg1 + 0x74) = 0x5c
            return 1
        
        *(arg1 + 0x74) = 8
    else
        *(arg1 + 0x74) = 7

sub_1406aec20(arg1)
return 1

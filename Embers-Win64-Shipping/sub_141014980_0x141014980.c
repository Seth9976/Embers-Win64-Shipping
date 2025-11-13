// 函数: sub_141014980
// 地址: 0x141014980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_4c = 1
void* var_58 = nullptr
int32_t rdx = *(arg1 + 0x38)
int32_t var_50 = 0
void* r9 = nullptr
void var_90

if (rdx s> 1)
    sub_141034bb0(&var_90, rdx)
    r9 = var_58

void* rsi = *(arg1 + 0x48)
int32_t rcx_1 = data_1439c7a34

if (rsi != 0 && rcx_1 u> 1)
    while (*(rsi + 0x30) != *(arg2 + 0x138))
        rsi = *(rsi + 0xe0)
        
        if (rsi == 0)
            break

void* r14 = data_143e2c330

if (r14 != 0 && rcx_1 u> 1)
    while (*(r14 + 0x28) != *(arg2 + 0x138))
        r14 = *(r14 + 0xd8)
        
        if (r14 == 0)
            break

void** rdi = *(arg1 + 0x30)
void* r12_2 = &rdi[sx.q(*(arg1 + 0x38)) * 4]
int64_t var_c8
uint64_t var_c0

if (rdi != r12_2)
    while (true)
        int32_t rdx_1 = *(arg1 + 0x28)
        void* r9_1 = arg2 + 0x1c0
        bool cond:0_1 = *(rdi + 0x1c) != 0
        __builtin_memset(&var_c8, 0, 0x38)
        int32_t rax_4 = 0
        
        if (cond:0_1)
            rax_4 = 1
        
        var_c8.d = rdx_1
        var_c8:4.d = rax_4
        
        if (*(rdi + 0x1d) == 0)
            var_c8:4.d = rax_4 | 2
        
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0 && rcx_1 u> 1)
            while (*(rbx_1 + 0x28) != *(arg2 + 0x138))
                rbx_1 = *(rbx_1 + 0xd8)
                
                if (rbx_1 == 0)
                    break
        
        int64_t var_b8_1
        int64_t var_a8_1
        uint64_t var_98_1
        
        if (rdx_1 == 0)
            int32_t rax_7 = rdi[1].d
            
            if (rax_7 == 2)
                var_b8_1:4.d = 0x10
            else if (rax_7 s> 2)
                if (rax_7 s<= 4)
                    var_b8_1:4.d = 6
                else if (rax_7 == 0xc)
                    var_b8_1:4.d = 0x22
            
            if (*(rdi + 0x1e) == 0)
                var_c0 = *(r14 + 0xb0)
            else
                var_c0 = 0
            
            uint64_t r8
            int64_t var_b0_1
            
            if (rsi == 0)
                var_b8_1.d = 0
                var_b0_1.d = 0
                var_a8_1 = 0
                r8 = zx.q(rdi[2].d)
                uint32_t rcx_8 = *(arg1 + 0x24) * 3
                uint32_t temp0_2 = (divu.dp.q(0:(*(rbx_1 + 0xc0)), r8)).d
                
                if (temp0_2 u<= rcx_8)
                    rcx_8 = temp0_2
                
                var_b0_1:4.d = rcx_8
            else
                int32_t rax_9 = 0x39
                
                if (*(arg1 + 0x1c) == 4)
                    rax_9 = 0x2a
                
                var_b8_1.d = rax_9
                var_b0_1.d = rdi[3].d * 3
                var_a8_1 =
                    zx.q(*(rdi + 0x14) * *(arg1 + 0x1c) * 3) + zx.q(*(arg1 + 0x20)) + *(rsi + 0xb8)
                var_b0_1:4.d = (divu.dp.q(0:(*(rbx_1 + 0xc0)), zx.q(rdi[2].d))).d
                sub_14105c1a0(*(rsi + 0x80), r9_1)
                r8 = zx.q(rdi[2].d)
                r9_1 = arg2 + 0x1c0
            int64_t var_a0_1 = zx.q(*(rdi + 0xc)) + *(rbx_1 + 0xb0)
            var_98_1 = zx.q(r8.d)
        else if (rdx_1 == 1)
            var_c0 = zx.q(rdi[3].d)
            var_b8_1 = zx.q(*(rdi + 0xc)) + *(rbx_1 + 0xb0)
            uint64_t var_b0_2 = zx.q(rdi[2].d)
        
        sub_14105c1a0(*(rbx_1 + 0x78), r9_1)
        int64_t rbx_2 = sx.q(var_50)
        int32_t rax_26 = (rbx_2 + 1).d
        var_50 = rax_26
        
        if (rax_26 s> var_4c)
            sub_141034740(&var_90, rbx_2.d)
        
        void* rdx_8 = &var_90
        
        if (var_58 != 0)
            rdx_8 = var_58
        
        rdi = &rdi[4]
        int64_t rcx_11 = rbx_2 * 0x38
        *(rdx_8 + rcx_11) = var_c8.o
        *(rdx_8 + rcx_11 + 0x10) = var_b8_1.o
        *(rdx_8 + rcx_11 + 0x20) = var_a8_1.o
        *(rdx_8 + rcx_11 + 0x30) = var_98_1
        
        if (rdi == r12_2)
            break
        
        rcx_1 = data_1439c7a34
    
    r9 = var_58

int32_t rax_28 = *(arg2 + 0x130)
int32_t rbx_3 = 0x20

if (rax_28 != 0)
    uint64_t rflags_1
    int32_t temp0_3
    temp0_3, rflags_1 = _bit_scan_forward(rax_28)
    rbx_3 = temp0_3

int32_t r12_3 = arg3
int64_t* rdi_1 = *(arg2 + 0x128)
uint64_t rsi_1 = zx.q(rbx_3)
void* r14_1 = arg1 + (rsi_1 << 3)
int64_t* rcx_13 = *(*(*(arg2 + 0x138) + 0x20) + 0x38)
int32_t var_e8 = var_50
void* rax_31 = &var_90

if (r9 != 0)
    rax_31 = r9

int32_t var_f0 = 1
int32_t rax_33 = *(arg1 + 0x40) | 0x20
int32_t var_e4 = 0

if (r12_3 != 1)
    rax_33 = *(arg1 + 0x40)

int32_t var_ec = rax_33
int64_t* var_108

if (*(r14_1 + 0x50) == 0)
    __builtin_memset(&var_c8, 0, 0x18)
    (*(*rcx_13 + 0x1f8))(rcx_13, &var_f0, &var_c8)
    var_108 = &var_c8
    sub_141019190(r14_1 + 0x50, arg1 + 0x70 + (rsi_1 << 3), rdi_1, rbx_3.b, var_108)
    void* rbx_4 = *(*(arg1 + (rsi_1 << 3) + 0x70) + 0x78)
    sub_14105c1a0(rbx_4, arg2 + 0x1c0)
    void* rax_36 = sub_141023fa0(arg2 + 0x1c0, rbx_4)
    int32_t rax_37 = sub_1410626f0(rax_36, 0)
    
    if (rax_37 == 0xffffffff)
        void* rbx_5 = *(arg2 + 0x1c8)
        int64_t var_d0_1 = 8
        int64_t rdi_2 = sx.q(*(rbx_5 + 0xc0))
        int32_t rax_38 = (rdi_2 + 1).d
        *(rbx_5 + 0xc0) = rax_38
        
        if (rax_38 s> *(rbx_5 + 0xc4))
            sub_1405a4f90(rbx_5 + 0xb8)
        
        *(*(rbx_5 + 0xb8) + rdi_2 * 0x10) = rbx_4.o
        sub_141069360(rax_36, 0, 8)
    else if (rax_37 != 8)
        var_108.d = 0
        sub_1410129f0(arg2 + 0x1c0, rbx_4, rax_37, 8, var_108.d)
        sub_141069360(rax_36, 0, 8)
    
    r12_3 = arg3

int32_t i = sub_141036c90(arg1, arg2)
void* rbx_6 = *(arg2 + 0x1c8)
int32_t rdx_17 = *(rbx_6 + 0x128)
int64_t* rcx_24 = *(rbx_6 + 0x30)

if (rdx_17 != 0)
    i = (*(*rcx_24 + 0xd0))(rcx_24, rdx_17, *(rbx_6 + 0x120))
    *(rbx_6 + 0x128) = 0

if (*(rsi_1 + arg1 + 0x18) != 0)
    sub_14105c1a0(*(*(arg1 + (rsi_1 << 3) + 0x70) + 0x78), arg2 + 0x1c0)
    sub_14105c1a0(*(*(r14_1 + 0x50) + 0x78), arg2 + 0x1c0)
    void* rdx_20 = *(r14_1 + 0x50)
    void* var_b0_3 = rax_31
    var_c0.o = var_f0.o
    var_c8 = *(rdx_20 + 0xb0)
    int64_t var_a0_2 = *(*(arg1 + (rsi_1 << 3) + 0x70) + 0xb0)
    int64_t rax_43
    
    if (r12_3 != 1)
        rax_43 = 0
    else
        rax_43 = *(rdx_20 + 0xb0)
    
    int64_t var_a8_2 = rax_43
    int64_t* rcx_30 = *(*(arg2 + 0x1c8) + 0x48)
    i = (*(*rcx_30 + 0x240))(rcx_30, &var_c8, 0, 0, var_108)
    int32_t i_1 = *(arg2 + 0x130)
    
    if (i_1 != 0)
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_forward(i_1)
        int32_t rcx_31 = temp0_4
        
        do
            *(zx.q(rcx_31) + arg1 + 0x18) = 0
            int32_t rax_47 = 1 << rcx_31.b
            rcx_31 = 0x20
            i = not.d(rax_47) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_forward(i)
                rcx_31 = temp0_5
        while (i != 0)

if ((*(arg1 + 0x40) & 1) == 0)
    void* rcx_32 = *(arg1 + (rsi_1 << 3) + 0x70)
    *(arg1 + (rsi_1 << 3) + 0x70) = 0
    
    if (rcx_32 != 0)
        i = (*(*(rcx_32 + 0x20) + 0x10))(rcx_32 + 0x20)

if (var_58 != 0)
    i = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_128)
return i

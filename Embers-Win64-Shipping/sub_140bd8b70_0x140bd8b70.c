// 函数: sub_140bd8b70
// 地址: 0x140bd8b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int64_t var_18

if (*(arg1 + 0xb0) == 0)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x19).b & 1) != 0)
        int64_t* rax_10 = sub_140d21e10(arg1, &var_18, 0)
        int16_t* const r9_1
        
        if (rax_10[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_10
        
        sub_140af98a0("Unknown", 0xeef, u"Can't bind to native class %s", r9_1)
        int64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140afbb40()

int64_t* rdi = *(arg1 + 0x40)

if (rdi != 0 && (*(arg1 + 0xb0) == 0 || *(arg1 + 0xc0) == 0 || *(arg1 + 0xb8) == 0))
    (*(*rdi + 0x268))(rdi)
    
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0xb0) = rdi[0x16]
    
    if (*(arg1 + 0xb8) == 0)
        *(arg1 + 0xb8) = rdi[0x17]
    
    if (*(arg1 + 0xc0) == 0)
        *(arg1 + 0xc0) = rdi[0x18]
    
    *(arg1 + 0xd0) |= rdi[0x1a]

if (*(arg1 + 0xb0) != 0)
    return 

int64_t* rax_15 = sub_140d21e10(arg1, &var_18, 0)

if (rax_15[1].d != 0)
    rsi = *rax_15

sub_140af98a0("Unknown", 0xf0f, u"Can't find ClassConstructor for class %s", rsi)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140afbb40()

// 函数: sub_141ef7370
// 地址: 0x141ef7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 != 0)
    void* rbx_1 = *(arg2 + 0xa0)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_1424890f0()
        void* rdx = *(rbx_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* rax_2 = sub_142488170()
            void* rdx_1 = *(arg2 + 0x10)
            arg3 = rax_2 + 0x30
            rax = sx.q(*(rax_2 + 0x38))
            
            if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == arg3)
                goto label_141ef73f0
    
    return 

label_141ef73f0:
uint64_t rax_3 = zx.q(*(arg1 + 0x1f2))

if ((arg1[0x3e].b & 0x40) != 0)
    rax_3.b |= 8
    arg1[0x3f] = arg2
    *(arg1 + 0x1f2) = rax_3.b
    return 

rax_3.b &= 0xf7
void* rsi_1 = nullptr
void* r14_1 = arg1[0x16]
*(arg1 + 0x1f2) = rax_3.b
arg1[0x3f] = 0
void* const r15_1

if (r14_1 == 0)
    r15_1 = nullptr
    rax_3.b = 0
else
    void* rax_4 = sub_142577430()
    void* rdx_2 = *(r14_1 + 0x10)
    arg3 = rax_4 + 0x30
    rax_3 = sx.q(*(rax_4 + 0x38))
    
    if (rax_3.d s> *(rdx_2 + 0x38))
        r15_1 = nullptr
        rax_3.b = 0
    else if (*(*(rdx_2 + 0x30) + (rax_3 << 3)) != arg3)
        r15_1 = nullptr
        rax_3.b = 0
    else
        int32_t rax_5 = *(r14_1 + 0xc)
        r15_1 = r14_1
        void* rax_11
        
        if (rax_5 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_5)
            uint32_t rdx_4 = zx.d(temp0_1)
            int32_t rax_7 = temp1_1 + rdx_4
            arg3 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3))
            rax_11 = arg3 + sx.q(zx.d(rax_7.w) - rdx_4) * 0x18
        
        if (((*(rax_11 + 8) u>> 0x1d).b & 1) != 0)
            rax_3.b = 0
        else
            rax_3.b = 1

int64_t arg_10
TEB* gsbase

if (rax_3.b != 0 && *(r15_1 + 0x3d9) != 0)
    wchar16* i_2 = nullptr
    
    for (wchar16* i = wcsstr(&UCharacterMovementComponent::CapsuleTouched", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_2 = i
    
    arg3 = sub_140b58260(&arg_10, &i_2[2], 1)
    int64_t rbx_2 = arg_10
    
    if (*(r15_1 + 0x3d9) != 0)
        if (data_143f223a0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f223a0)
            
            if (data_143f223a0 == 0xffffffff)
                sub_140b58170(&data_143f22398, "OnComponentBeginOverlap", 1)
                _Init_thread_footer(&data_143f223a0)
        
        char rax_15
        rax_15, arg3 = sub_140d2a3f0(r15_1, data_143f22398, arg1, rbx_2)
        *(r15_1 + 0x3d9) = rax_15

int128_t zmm6_1 = sub_141f27260(arg1, arg2, arg3)
void* const rbx_3 = arg1[0x26]
void* rax_16
int64_t rax_17
void* rdx_9

if (rbx_3 != 0)
    rax_16 = sub_1424890f0()
    rdx_9 = *(rbx_3 + 0x10)
    rax_17 = sx.q(*(rax_16 + 0x38))

if (rbx_3 == 0 || rax_17.d s> *(rdx_9 + 0x38)
        || *(*(rdx_9 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
    rbx_3 = nullptr

int64_t rax_20 = arg1[0x16]
arg1[0x29] = rbx_3

if (rax_20 != r14_1)
    (*(*arg1 + 0x710))(arg1)
    rax_20 = arg1[0x16]

if (rax_20 == 0)
    (*(*arg1 + 0x508))(arg1)

rax = arg1[0x17]
void* const rax_28

if (rax != 0)
    int32_t rax_22 = *(rax + 0xc)
    
    if (rax_22 s>= data_143e1d9b4)
        rax_28 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_22)
        uint32_t rdx_11 = zx.d(temp2_1)
        int32_t rax_24 = temp3_1 + rdx_11
        rax_28 =
            *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + sx.q(zx.d(rax_24.w) - rdx_11) * 0x18

if (rax == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) != 0)
    r15_1.b = 0
else
    r15_1.b = 1
    
    if ((*(arg1 + 0x1f2) & 0x10) != 0)
        int128_t var_38_1 = zmm6_1
        wchar16* i_3 = nullptr
        
        for (wchar16* i_1 = wcsstr(&UCharacterMovementComponent::CapsuleTouched", ::"); i_1 != 0; 
                i_1 = wcsstr(&i_1[1], ::"))
            i_3 = i_1
        
        sub_140b58260(&arg_10, &i_3[2], 1)
        int64_t rbx_4 = arg_10
        void* r14_2 = arg1[0x17]
        int128_t var_58
        sub_140d3a3a0(&var_58, nullptr)
        int64_t var_50_1 = 0
        sub_140d3a3a0(&var_58, arg1)
        int32_t rcx_24
        rcx_24.b = sub_140b5b8a0(rbx_4.d, 0) == 0
        
        if ((rbx_4:4.d != 0 | rcx_24.b) != 0)
            void* rax_31 = sub_140d3c6e0(&var_58)
            
            if (rax_31 != 0)
                sub_140d1fd20(rax_31, rbx_4)
        
        int128_t zmm6_2 = var_58
        
        if (data_143f223a0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f223a0)
            
            if (data_143f223a0 == 0xffffffff)
                zmm6_2 = sub_140b58170(&data_143f22398, "OnComponentBeginOverlap", 1)
                _Init_thread_footer(&data_143f223a0)
        
        int64_t rdx_16 = data_143f22398
        int128_t var_48 = zmm6_2
        rax = sub_140d18770(r14_2, rdx_16, &var_48)
        *(r14_2 + 0x3d9) |= rax.b

char rdx_17 = arg1[0x3e].b

if ((rdx_17 & 0x20) != 0)
    char rcx_28
    
    if (r15_1.b == 0)
        rcx_28 = 0
    else
        rcx_28 = *(arg1[0x17] + 0x209)
    
    arg1[0x3e].b = (rcx_28 & 1) << 4 | (rdx_17 & 0xcf)

if ((*(arg1 + 0x389) & 0x10) == 0)
    return 

if (arg2 != 0)
    int32_t rax_34 = *(arg2 + 0xc)
    
    if (rax_34 s< data_143e1d9b4)
        int16_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_34)
        uint32_t rdx_19 = zx.d(temp4_1)
        int32_t rax_36 = temp5_1 + rdx_19
        rsi_1 =
            *(data_143e1d9a0 + (sx.q(rax_36 s>> 0x10) << 3)) + sx.q(zx.d(rax_36.w) - rdx_19) * 0x18

if (arg2 == 0 || ((*(rsi_1 + 8) u>> 0x1d).b & 1) != 0)
    rax.b = 0
else
    rax.b = 1

if (rax.b == 0)
    return 

void* rcx_34 = *(sub_1405be820(arg1) + 0x140)

if (rcx_34 != 0)
    sub_141dd3b30(rcx_34, arg1, *(arg1 + 0x3bc))

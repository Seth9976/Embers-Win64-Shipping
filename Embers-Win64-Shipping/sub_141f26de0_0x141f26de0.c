// 函数: sub_141f26de0
// 地址: 0x141f26de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x16]
int64_t arg_8
TEB* gsbase
int128_t zmm6

if (rcx != 0 && rcx != arg2)
    if ((arg1[0x1d].b & 0x40) != 0)
        sub_141f49250(rcx, 0)
        void* r9_1 = arg1[0x16]
        int32_t rax_1 = *(r9_1 + 0xc)
        void* const rax_7
        
        if (rax_1 s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp2_1)
            int32_t rax_3 = temp3_1 + rdx_1
            rax_7 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
            int64_t r8
            r8.b = 1
            sub_141f48010(r9_1, nullptr, r8.b)
    
    wchar16* i_2 = nullptr
    
    for (wchar16* i = wcsstr(&UMovementComponent::PhysicsVolumeChanged", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_2 = i
    
    zmm6 = sub_140b58260(&arg_8, &i_2[2], 1)
    void* rsi_1 = arg1[0x16]
    int64_t rbx_1 = arg_8
    
    if (*(rsi_1 + 0x151) != 0)
        if (data_143f3b380
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3b380)
            
            if (data_143f3b380 == 0xffffffff)
                zmm6 = sub_140b58170(&data_143f3b378, "PhysicsVolumeChangedDelegate", 1)
                _Init_thread_footer(&data_143f3b380)
        
        *(rsi_1 + 0x151) = sub_140d2a3f0(rsi_1, data_143f3b378, arg1, rbx_1)
        rsi_1 = arg1[0x16]
    
    sub_1423c7420(rsi_1 + 0x30, arg1, &arg1[6])

void* const rax_20

if (arg2 != 0)
    int32_t rax_14 = *(arg2 + 0xc)
    
    if (rax_14 s>= data_143e1d9b4)
        rax_20 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_14)
        uint32_t rdx_7 = zx.d(temp0_1)
        int32_t rax_16 = temp1_1 + rdx_7
        rax_20 =
            *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3)) + sx.q(zx.d(rax_16.w) - rdx_7) * 0x18

uint8_t rax_13

if (arg2 == 0 || ((*(rax_20 + 8) u>> 0x1d).b & 1) != 0)
    rax_13 = 0
else
    rax_13 = 1

void* const rbx_2 = nullptr

if (rax_13 != 0)
    rbx_2 = arg2

arg1[0x16] = rbx_2
void* rax_22
int64_t rax_23
void* rdx_9

if (rbx_2 != 0)
    rax_22 = sub_142577430()
    rdx_9 = *(rbx_2 + 0x10)
    rax_23 = sx.q(*(rax_22 + 0x38))

if (rbx_2 == 0 || rax_23.d s> *(rdx_9 + 0x38)
        || *(*(rdx_9 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
    rbx_2 = nullptr

void* rax_25 = arg1[0x16]
arg1[0x17] = rbx_2

if (rax_25 != 0)
    int32_t rax_26 = *(rax_25 + 0xc)
    void* const rax_32
    
    if (rax_26 s>= data_143e1d9b4)
        rax_32 = nullptr
    else
        int16_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_26)
        uint32_t rdx_11 = zx.d(temp4_1)
        int32_t rax_28 = temp5_1 + rdx_11
        rax_32 =
            *(data_143e1d9a0 + (sx.q(rax_28 s>> 0x10) << 3)) + sx.q(zx.d(rax_28.w) - rdx_11) * 0x18
    
    if (((*(rax_32 + 8) u>> 0x1d).b & 1) == 0)
        int128_t var_28_1 = zmm6
        wchar16* i_3 = nullptr
        
        for (wchar16* i_1 = wcsstr(&UMovementComponent::PhysicsVolumeChanged", ::"); i_1 != 0; 
                i_1 = wcsstr(&i_1[1], ::"))
            i_3 = i_1
        
        sub_140b58260(&arg_8, &i_3[2], 1)
        int64_t rbx_3 = arg_8
        void* rsi_2 = arg1[0x16]
        int128_t var_48
        sub_140d3a3a0(&var_48, nullptr)
        int64_t var_40_1 = 0
        sub_140d3a3a0(&var_48, arg1)
        int32_t rcx_25
        rcx_25.b = sub_140b5b8a0(rbx_3.d, 0) == 0
        
        if ((rbx_3:4.d != 0 | rcx_25.b) != 0)
            void* rax_36 = sub_140d3c6e0(&var_48)
            
            if (rax_36 != 0)
                sub_140d1fd20(rax_36, rbx_3)
        
        int128_t zmm6_1 = var_48
        
        if (data_143f3b380
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3b380)
            
            if (data_143f3b380 == 0xffffffff)
                zmm6_1 = sub_140b58170(&data_143f3b378, "PhysicsVolumeChangedDelegate", 1)
                _Init_thread_footer(&data_143f3b380)
        
        int64_t rdx_16 = data_143f3b378
        int128_t var_38 = zmm6_1
        char rax_39 = sub_140d18770(rsi_2, rdx_16, &var_38)
        *(rsi_2 + 0x151) |= rax_39
        uint8_t rdx_17 = arg1[0x1d].b
        
        if ((rdx_17 & 0x40) != 0)
            sub_141f49250(arg1[0x16], rdx_17 u>> 7)
            
            if (arg1[0x1d].b s>= 0)
                sub_141f48010(arg1[0x16], nullptr, 1)
            else if (*(arg1 + 0xe9) == 0 && *(arg1 + 0xea) == 0)
                int64_t* rcx_30 = arg1[0x16]
                (*(*rcx_30 + 0x4a8))(rcx_30, 1)
        
        sub_1423bc410(arg1[0x16] + 0x30, arg1, &arg1[6])

int64_t result = (*(*arg1 + 0x450))(arg1)

if ((arg1[0x1d].b & 0x20) == 0)
    return result

jump(*(*arg1 + 0x4f8))

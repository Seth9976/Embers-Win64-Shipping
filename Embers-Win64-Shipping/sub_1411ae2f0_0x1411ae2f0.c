// 函数: sub_1411ae2f0
// 地址: 0x1411ae2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e72548 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e72548)
    
    if (data_143e72548 == 0xffffffff)
        int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1411b03d0
        int128_t* var_50 = nullptr
        int32_t var_48_1 = 0
        
        do
            char var_58
            i = i(zx.q(var_58), &var_50)
        while (i != 0)
        
        int128_t* r9_1 = var_50
        int32_t r8_1 = var_48_1 - 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_48_1)
        int32_t i_3 = (temp1_1 - temp0_1) s>> 1
        
        if (i_3 s> 0)
            uint64_t i_2 = zx.q(i_3)
            int128_t* rcx_5 = r9_1
            uint64_t i_1
            
            do
                int128_t* rax_11 = &r9_1[sx.q(r8_1) * 3]
                
                if (rcx_5 != rax_11)
                    int128_t zmm2 = *rcx_5
                    int128_t zmm3 = rcx_5[1]
                    int128_t zmm4_1 = rcx_5[2]
                    *rcx_5 = *rax_11
                    rcx_5[1] = rax_11[1]
                    rcx_5[2] = rax_11[2]
                    *rax_11 = zmm2
                    rax_11[1] = zmm3
                    rax_11[2] = zmm4_1
                
                rcx_5 = &rcx_5[3]
                r8_1 -= 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        int128_t** var_60_1 = &var_50
        int32_t var_68_1 = 0x30
        sub_1419c2220(&data_143e724b0, 0, u"FReadParameters", u"FReadParameters", 0, nullptr)
        int128_t* rcx_6 = var_50
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        atexit(sub_142cd5080)
        _Init_thread_footer(&data_143e72548)

int64_t rbx_1 = sx.q(arg2[1].d)
wchar16 const* const var_40 = u"DebugData"
wchar16 const* const var_38 = u"FHairStrandsDebugData::FReadParameters"
int32_t var_30 = 0
int32_t rax_2 = (rbx_1 + 1).d
char var_2c = 0x12
int32_t var_28 = 0
int32_t var_24 = 1
int64_t var_20 = 1
void* var_18 = &data_143e724b0
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_3 = *arg2
int64_t rcx_3 = rbx_1 * 6
*(rax_3 + (rcx_3 << 3)) = var_40.o
*(rax_3 + (rcx_3 << 3) + 0x10) = var_30.o
*(rax_3 + (rcx_3 << 3) + 0x20) = var_20.o
return sub_140594890

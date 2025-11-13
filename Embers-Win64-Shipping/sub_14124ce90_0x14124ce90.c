// 函数: sub_14124ce90
// 地址: 0x14124ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e83f68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e83f68)
    
    if (data_143e83f68 == 0xffffffff)
        int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_141248d20
        int128_t* var_60 = nullptr
        int32_t var_58_1 = 0
        
        do
            char var_68
            i = i(zx.q(var_68), &var_60)
        while (i != 0)
        
        int128_t* r9_1 = var_60
        int32_t r8_1 = var_58_1 - 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_58_1)
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
        
        int128_t** var_70_1 = &var_60
        int32_t var_78_1 = 0x30
        sub_1419c2220(&data_143e83ed0, 0, FAmbientCubemapParameters", FAmbientCubemapParameters", 
            0, nullptr)
        int128_t* rcx_6 = var_60
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        atexit(sub_142cd89f0)
        _Init_thread_footer(&data_143e83f68)

int64_t rbx_1 = sx.q(arg2[1].d)
wchar16 const* const var_50 = u"AmbientCubemap"
wchar16 const* const var_48 = u"FAmbientCubemapParameters"
int32_t var_40 = 0x20
int32_t rax_2 = (rbx_1 + 1).d
char var_3c = 0x12
int32_t var_38 = 0
int32_t var_34 = 1
int64_t var_30 = 1
void* var_28 = &data_143e83ed0
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_3 = *arg2
int64_t rcx_3 = rbx_1 * 6
*(rax_3 + (rcx_3 << 3)) = var_50.o
*(rax_3 + (rcx_3 << 3) + 0x10) = var_40.o
*(rax_3 + (rcx_3 << 3) + 0x20) = var_30.o
return sub_14124d080

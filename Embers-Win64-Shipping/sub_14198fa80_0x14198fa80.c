// 函数: sub_14198fa80
// 地址: 0x14198fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_14081d830(0x88, *(arg1 + 8), 1, 0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int128_t* var_30
    TEB* gsbase
    
    if (data_143f1aa38
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f1aa38)
        
        if (data_143f1aa38 == 0xffffffff)
            int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1419bb820
            var_30 = nullptr
            int32_t var_28_2 = 0
            
            do
                char var_38
                i = i(zx.q(var_38), &var_30)
            while (i != 0)
            
            int128_t* r9 = var_30
            int32_t r8 = var_28_2 - 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_28_2)
            int32_t i_3 = (temp1_1 - temp0_1) s>> 1
            
            if (i_3 s> 0)
                uint64_t i_2 = zx.q(i_3)
                int128_t* rcx_4 = r9
                uint64_t i_1
                
                do
                    int128_t* rax_13 = &r9[sx.q(r8) * 3]
                    
                    if (rcx_4 != rax_13)
                        int128_t zmm2 = *rcx_4
                        int128_t zmm3 = rcx_4[1]
                        int128_t zmm4_1 = rcx_4[2]
                        *rcx_4 = *rax_13
                        rcx_4[1] = rax_13[1]
                        rcx_4[2] = rax_13[2]
                        *rax_13 = zmm2
                        rax_13[1] = zmm3
                        rax_13[2] = zmm4_1
                    
                    rcx_4 = &rcx_4[3]
                    r8 -= 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            int128_t** var_40_1 = &var_30
            int32_t var_48_1 = 0x10
            sub_1419c2220(&data_143f1a9a0, 0, FCopyTextureParameters", FCopyTextureParameters", 0, 
                nullptr)
            int128_t* rcx_5 = var_30
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            atexit(sub_142cf24c0)
            _Init_thread_footer(&data_143f1aa38)
    
    rdi[2] = 0
    rdi[3] = 0
    rdi[6].b = arg4
    void* var_28_1 = &data_143f1a9d0
    *rdi = &data_14300a9d0
    var_30 = arg3
    *(rdi + 0x20) = var_30.o
    *(rdi + 0x38) = *arg5
    *(rdi + 0x48) = arg5[1]
    *(rdi + 0x58) = arg5[2]
    *(rdi + 0x68) = arg5[3]
    *(rdi + 0x78) = arg5[4]

rdi[2] = *(arg1 + 0x1a0)
rdi[3] = *(arg1 + 0x218)
int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax_6 = (rsi + 1).d
*(arg1 + 0x18) = rax_6

if (rax_6 s> *(arg1 + 0x1c))
    sub_14083a440(arg1 + 0x10, rsi.d)

int64_t result = *(arg1 + 0x10)
*(result + (rsi << 3)) = rdi
return result

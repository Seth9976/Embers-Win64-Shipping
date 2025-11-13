// 函数: sub_141b2bca0
// 地址: 0x141b2bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x20] != 0)
    void* rax_1 = sub_142484770()
    
    if (rax_1 != 0)
        void* rdx_1 = arg1[0x20]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx_1 != 0)
            arg1[0x1c] = rdx_1

int64_t zmm0 = arg1[0x21].d

if (not(zmm0.d f== 1f))
    arg1[0x1d].d = zmm0.d

char rax_4 = *(arg1 + 0x10c)

if (rax_4 != 0)
    *(arg1 + 0xec) = rax_4

if (data_143dbb208.d.d f!= arg1[0x22].d || data_143dbb208:4.d.d f!= *(arg1 + 0x114)
        || not(data_143dbb210.d f== arg1[0x23].d))
    int32_t rax_5 = arg1[0x23].d
    arg1[0x1e] = arg1[0x22]
    arg1[0x1f].d = rax_5

return j_sub_140ce3290(arg1) __tailcall

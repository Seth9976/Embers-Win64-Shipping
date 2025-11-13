// 函数: sub_1421ad3d0
// 地址: 0x1421ad3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if (data_143de5426 == 0)
    if (data_143cd80c8 != 0)
        goto label_1421ad592
    
    goto label_1421ad439

int32_t* result

if (data_143de5427 == 0 || data_143cd80c8 != 0)
label_1421ad592:
    result = arg2
    *arg2 = 0
    arg2[1].w = 0
else
label_1421ad439:
    int32_t rdi_1 = arg3[1].d
    
    if (rdi_1 == 0)
        goto label_1421ad592
    
    int32_t rcx = *(arg1 + 0x40)
    int32_t r9_2 = 0
    int16_t arg_20
    int16_t arg_22
    
    if (rcx s> 0)
        int64_t r10_1 = *(arg1 + 0x20)
        
        do
            int64_t rax_2 = sx.q(r9_2)
            void** i_1 = r10_1 + (rax_2 << 3)
            
            for (void** i = *(r10_1 + (rax_2 << 3)); i != 0; i = *i)
                uint32_t r8 = zx.d(*(i + 0xa))
                
                if (r8 s> rdi_1)
                    int16_t rdx_1 = i[1].w
                    r8.w -= rdi_1.w
                    *(i + 0xa) = r8.w
                    arg_20 = rdx_1
                    arg_22 = r9_2.w
                    i[1].w = rdx_1 + rdi_1.w
                    *(arg1 + 0x44) -= rdi_1
                    goto label_1421ad4a4
                
                if (r8 == rdi_1)
                    int16_t rcx_2 = i[1].w
                    *(arg1 + 0x44) -= rdi_1
                    arg_20 = rcx_2
                    *i_1 = *i
                    *i = *(arg1 + 0x30)
                    *(arg1 + 0x30) = i
                    arg_22 = r9_2.w
                    goto label_1421ad4a4
                
                i_1 = i
            
            r9_2 += 1
        while (r9_2 s< rcx)
    
    rdi_1 = 0
    arg_20 = *(arg1 + 0x3c)
    arg_22 = rcx.w
label_1421ad4a4:
    int32_t r15_1 = arg_20.d
    
    if (rdi_1.w == 0)
        *arg2 = r15_1
        result = arg2
        arg2[1].w = rdi_1.w
    else
        int64_t rsi_1 = sx.q(*(arg1 + 0x50))
        int32_t rax_4 = (rsi_1 + 1).d
        *(arg1 + 0x50) = rax_4
        
        if (rax_4 s> *(arg1 + 0x54))
            sub_1405a4f90(arg1 + 0x48)
        
        int64_t rsi_2 = rsi_1 << 4
        int64_t* rsi_3 = rsi_2 + *(arg1 + 0x48)
        
        if (rsi_2 == neg.q(*(arg1 + 0x48)))
            rsi_3 = nullptr
        else
            *(rsi_3 + 0xa) = 0
        
        rsi_3[1].d = r15_1
        uint64_t rbx_2 = zx.q(rdi_1.w) << 2
        *(rsi_3 + 0xc) = rdi_1.w
        int64_t rax_5 = sub_140a82f30(rbx_2, 0)
        *rsi_3 = rax_5
        memcpy(rax_5, *arg3, rbx_2.d)
        result = arg2
        *arg2 = r15_1
        arg2[1].w = rdi_1.w

return result

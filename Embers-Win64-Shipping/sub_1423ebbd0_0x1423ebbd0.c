// 函数: sub_1423ebbd0
// 地址: 0x1423ebbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
uint64_t result = zx.q(*(rdi + 0x14))

if (data_143cd80cc s> result.d)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int64_t rbx
    rbx.b = 0
    int32_t zmm0_1 = sub_1423c1900()
    
    if (not(data_143f5b72c f== zmm0_1))
        data_143f5b72c = zmm0_1
        rbx.b = 1
    
    if (data_143f5b738 s> *(rdi + 0x14))
        _Init_thread_header(&data_143f5b738)
        
        if (data_143f5b738 == 0xffffffff)
            int64_t* rcx_15 = data_143db18d0
            
            if (rcx_15 == 0)
                sub_140a53c40()
                rcx_15 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_17 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.MaxAnisotropy", r8_4)
            int64_t rax_14
            
            if (rax_17 == 0)
                rax_14 = 0
            else
                int64_t rdx_4 = *rax_17
                rax_14 = (*(rdx_4 + 0x58))(rax_17, rdx_4)
            
            data_143f5b730 = rax_14
            _Init_thread_footer(&data_143f5b738)
    
    result = data_143f5b730
    int32_t rcx_1 = *result
    
    if (data_143a303a4 != rcx_1)
        data_143a303a4 = rcx_1
    label_1423ebc83:
        int64_t var_48 = 0
        int32_t var_38_1 = 0xffffffff
        int32_t var_40_1 = 0
        sub_140d3cc80(sub_1425b3af0(), &var_48, 1, 0x10, 0)
        int32_t r8_2 = var_40_1
        int32_t i = var_38_1 + 1
        int64_t rdx_2 = var_48
        int32_t i_1 = i
        
        if (i s< r8_2)
            while (*(rdx_2 + (sx.q(i) << 3)) == 0)
                int32_t i_2 = i + 1
                i_1 = i_2
                i = i_2
                
                if (i_2 s>= r8_2)
                    break
        
        while (i s>= 0)
            if (i s>= r8_2)
                break
            
            int64_t* rcx_4 = *(rdx_2 + (sx.q(i) << 3))
            (*(*rcx_4 + 0x360))(rcx_4)
            r8_2 = var_40_1
            i = i_1 + 1
            rdx_2 = var_48
            i_1 = i
            
            if (i s< r8_2)
                while (*(rdx_2 + (sx.q(i) << 3)) == 0)
                    int32_t i_3 = i + 1
                    i_1 = i_3
                    i = i_3
                    
                    if (i_3 s>= r8_2)
                        break
        
        if (rdx_2 != 0)
            sub_140a74f90(rdx_2)
        
        int64_t* rdi_1 = data_143f56328
        int64_t* rbx_1 = data_143f56330
        
        if (rdi_1 != 0 || rbx_1 != 0)
            int64_t* var_50_1 = rbx_1
            
            if (sub_140a80f40() == 0)
                if (data_143f138f4 == 0)
                    if (data_143de5480 == 0)
                        goto label_1423ebd6f
                    
                    uint32_t rax_12
                    rax_12.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_12.b != 0)
                        goto label_1423ebd6f
                    
                    goto label_1423ebdd5
                
            label_1423ebdd5:
                void var_30
                int64_t* rax_13 = sub_1423d7bf0(&var_30, nullptr, 0xff)
                *(*rax_13 + 0x10) = rdi_1.o
                void* rcx_13 = *rax_13
                int32_t r8_3 = rax_13[2].d
                int64_t* rdx_3 = rax_13[1]
                int64_t* rbx_2 = *(rcx_13 + 0x28)
                int64_t* arg_10 = rbx_2
                int32_t* rdi_2 = &rbx_2[9]
                
                if (rbx_2 != 0)
                    *rdi_2 += 1
                    rbx_2 = arg_10
                
                sub_1405e48c0(rcx_13, rdx_3, r8_3, 1)
                
                if (rbx_2 != 0)
                    int32_t rsi_1 = *rdi_2
                    *rdi_2 -= 1
                    
                    if (rsi_1 == 1)
                        sub_140a2f6e0(arg_10)
            else
            label_1423ebd6f:
                
                if (rdi_1 != 0)
                    (*(*rdi_1 + 0x20))(rdi_1)
                    (*(*rdi_1 + 0x18))(rdi_1)
                
                if (rbx_1 != 0)
                    (*(*rbx_1 + 0x20))(rbx_1)
                    (*(*rbx_1 + 0x18))(rbx_1)
        
        return sub_14212f820(0)
    
    if (rbx.b != 0)
        goto label_1423ebc83

return result

// 函数: sub_140da64e0
// 地址: 0x140da64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f98)
    
    if (data_143e20f98 == 0xffffffff)
        atexit(sub_142cca240)
        _Init_thread_footer(&data_143e20f98)

int64_t rax_2 = sub_140da4990(arg2)
void* rax_3 = sub_140da3c10(arg1, rax_2)
int64_t* r14 = nullptr
int64_t* rdi

if (rax_3 == 0)
    rdi = nullptr
else
    int32_t arg_18 = arg3
    int64_t* rax_4 = sub_140d97340(&arg_18, rax_3 + 0x38)
    rdi = rax_4
    
    if (rax_4 == 0)
        int64_t* rax_5 = sub_140d97340(&arg_18, rax_3 + 0x48)
        rdi = rax_5
        
        if (rax_5 == 0)
            void* rax_6 = *(rax_3 + 0x28)
            void* rcx_4 = rax_3 + 8
            
            if (rax_6 != 0)
                rcx_4 = rax_6
            
            rdi = *rcx_4

if (rdi != 0)
    void* rax_7 = sub_140da3c10(arg1, rax_2)
    int64_t* rbx_1
    
    if (rax_7 == 0)
        rbx_1 = nullptr
    else
        void* rcx_6 = rax_7 + 8
        void* rax_8 = *(rax_7 + 0x28)
        
        if (rax_8 != 0)
            rcx_6 = rax_8
        
        rbx_1 = *rcx_6
    
    void* rax_9
    int512_t zmm1_1
    rax_9, zmm1_1 = sub_140da3c10(arg1, rax_2)
    
    if (rax_9 != 0)
        void* rcx_8 = rax_9 + 8
        void* rax_10 = *(rax_9 + 0x28)
        
        if (rax_10 != 0)
            rcx_8 = rax_10
        
        r14 = *(rcx_8 + 0x10)
    
    int64_t* rax_11 = sub_140da61b0(rdi, &arg2[8])
    char rax_12
    
    if (rax_11 != 0)
        rax_12, zmm1_1 = sub_140d9d070(arg1, rax_11, arg3, zmm1_1)
    
    if (rax_11 != 0 && rax_12 != 0)
        *arg4 = rdi[5].d
        return rax_11
    
    if (rbx_1 != 0 && rdi != rbx_1)
        int64_t* rax_13 = sub_140da61b0(rbx_1, &arg2[8])
        
        if (rax_13 != 0)
            int64_t* rax_14
            int512_t zmm1_2
            rax_14, zmm1_2 = sub_140da60e0(arg1, rax_13, zmm1_1)
            int64_t* rax_15
            rax_15, zmm1_1 = sub_140da2fc0(arg1, rdi, rax_14, zmm1_2)
            
            if (rax_15 != 0)
                char rax_16
                rax_16, zmm1_1 = sub_140d9d070(arg1, rax_15, arg3, zmm1_1)
                
                if (rax_16 != 0)
                    *arg4 = rdi[5].d
                    return rax_15
    
    int64_t* rsi_2 = *rdi
    
    if (rsi_2[1].d s> 0)
        void* rsi_3 = *rsi_2
        int64_t* rsi_1 = rsi_3 + 8
        
        if (rsi_3 != -8)
            char rax_17
            rax_17, zmm1_1 = sub_140d9d070(arg1, rsi_1, arg3, zmm1_1)
            
            if (rax_17 != 0)
                *arg4 = rdi[5].d
                return rsi_1
    
    if (rdi != rbx_1)
        int64_t* rax_20 = sub_140da61b0(rbx_1, &arg2[8])
        char rax_21
        
        if (rax_20 != 0)
            rax_21, zmm1_1 = sub_140d9d070(arg1, rax_20, arg3, zmm1_1)
        
        if (rax_20 != 0 && rax_21 != 0)
            *arg4 = rbx_1[5].d
            return rax_20
        
        int64_t* rdi_2 = *rbx_1
        
        if (rdi_2[1].d s> 0)
            void* rdi_3 = *rdi_2
            int64_t* rdi_1 = rdi_3 + 8
            
            if (rdi_3 != -8)
                char rax_22
                rax_22, zmm1_1 = sub_140d9d070(arg1, rdi_1, arg3, zmm1_1)
                
                if (rax_22 != 0)
                    *arg4 = rbx_1[5].d
                    return rdi_1
    
    int64_t* rax_24 = sub_140da61b0(r14, &arg2[8])
    
    if (rax_24 != 0)
        *arg4 = r14[5].d
        return rax_24
    
    if (rbx_1 != 0 && r14 != rbx_1)
        int64_t* rax_25 = sub_140da61b0(rbx_1, &arg2[8])
        
        if (rax_25 != 0)
            int64_t* rax_26
            int512_t zmm1_3
            rax_26, zmm1_3 = sub_140da60e0(arg1, rax_25, zmm1_1)
            int64_t* rax_27 = sub_140da2fc0(arg1, r14, rax_26, zmm1_3)
            
            if (rax_27 != 0)
                *arg4 = r14[5].d
                return rax_27
    
    int64_t* rcx_24 = *r14
    
    if (rcx_24[1].d s> 0)
        void* rcx_25 = *rcx_24
        
        if (rcx_25 != -8)
            *arg4 = r14[5].d
            return rcx_25 + 8
    
    int64_t* rax_28 = sub_140da61b0(rbx_1, &arg2[8])
    
    if (rax_28 != 0)
        *arg4 = rbx_1[5].d
        return rax_28
    
    int64_t* rcx_28 = *rbx_1
    
    if (rcx_28[1].d s> rax_28.d)
        void* rcx_29 = *rcx_28
        
        if (rcx_29 != -8)
            *arg4 = rbx_1[5].d
            return rcx_29 + 8

*arg4 = 0x3f800000
return &data_143e20f78

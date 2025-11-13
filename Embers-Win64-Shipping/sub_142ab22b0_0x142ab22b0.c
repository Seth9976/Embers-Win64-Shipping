// 函数: sub_142ab22b0
// 地址: 0x142ab22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
sub_142ab2920()
sub_142a860a0(&data_144016090)
int32_t* rax = sub_142a86bf0(*(arg1 + 8), arg2)
int32_t* r8 = rax
void* rdi

if (rax == 0)
label_142ab24ae:
    sub_142ab26d0(arg1, arg2, *(arg1 + 0x30), 0, arg4)
    rdi.b = 0
else
    TEB* gsbase
    void* r13_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    
    while (true)
        int32_t rdx_2 = *(*(r8 + 0x10) + 8)
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            int32_t rax_2 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) += 1
            
            if (rax_2 == 0)
                *(arg1 + 0x18) += 1
        
        if (rcx_2 != *(arg1 + 0x30) || rdx_2 != 0)
            rdx_2.b = 0
        else
            rdx_2.b = 1
        
        if (rcx_2 != 0)
            int32_t rax_3 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (rax_3 == 1)
                *(arg1 + 0x18) -= 1
        
        if (rdx_2.b == 0)
            *arg4 = *(*(r8 + 0x10) + 8)
            void* rax_8 = *arg3
            
            if (rax_8 != 0)
                int32_t rbp_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    *(arg1 + 0x18) -= 1
            
            void* rax_10 = *(r8 + 8)
            *arg3 = rax_10
            
            if (rax_10 != 0)
                int32_t rsi_1 = *(rax_10 + 0xc)
                *(rax_10 + 0xc) += 1
                
                if (rsi_1 == 0)
                    *(arg1 + 0x18) += 1
            
            rdi.b = 1
            break
        
        int32_t* rbx_1 = 0x14 + *r13_1
        
        if (data_1440160e0 s> *rbx_1)
            _Init_thread_header(&data_1440160e0)
            
            if (data_1440160e0 == 0xffffffff)
                memset(&data_144016090, 0, 0x50)
                _Mtx_init_in_situ(&data_144016090, 2)
                atexit(sub_142d160c0)
                _Init_thread_footer(&data_1440160e0)
        
        if (data_144016148 s> *rbx_1)
            _Init_thread_header(&data_144016148)
            
            if (data_144016148 == 0xffffffff)
                sub_142a859d0(&data_1440160f0)
                atexit(sub_142d160b0)
                _Init_thread_footer(&data_144016148)
        
        sub_142a86070(&data_1440160f0, &data_144016090)
        int32_t* rax_6 = sub_142a86bf0(*(arg1 + 8), arg2)
        r8 = rax_6
        
        if (rax_6 == 0)
            goto label_142ab24ae

sub_142a860d0(&data_144016090)
return zx.q(rdi.b)

// 函数: sub_1419328c0
// 地址: 0x1419328c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143eff810)
void* rdi = data_143eff640
int32_t arg_18
sub_14193a5e0(rdi + 0x90, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x88 + *(rdi + 0x90)

int64_t* rsi = rax_2 + 0x78

if (rax_2 == 0)
    rsi = nullptr

char* rbx

if (rsi == 0)
    rbx.b = 0
else
    int128_t* rsi_1 = *rsi
    rbx = *(rsi_1 + 0x88)
    
    if (rbx == 0)
        goto label_14193297e
    
    int32_t rax_3 = 0
    bool z_1
    
    if (0 == *(rbx + 8))
        *(rbx + 8) = 0
        z_1 = true
    else
        rax_3 = *(rbx + 8)
        z_1 = false
    
    if (z_1)
    label_141932974:
        rbx = nullptr
    label_14193297e:
        EnterCriticalSection(&data_143eff838)
        
        if (*(rsi_1 + 0xa4) == 3)
            int64_t* rdx_1 = *(arg1 + 0x130)
            int64_t* rdi_2 = rdx_1
            void* rcx_2 = &rdx_1[sx.q(*(arg1 + 0x138))]
            
            if (rdx_1 != rcx_2)
                do
                    if (*rdi_2 == rsi_1)
                        int32_t rdi_4 = ((rdi_2 - rdx_1) s>> 3).d
                        
                        if (rdi_4 != 0xffffffff)
                            sub_141934230(arg1, rsi_1)
                            int32_t rcx_7 = *(arg1 + 0x138)
                            int32_t rax_11 = rcx_7 - rdi_4 - 1
                            
                            if (rax_11 s>= 1)
                                rax_11 = 1
                            
                            if (rax_11 != 0)
                                int64_t* r9_1 = *(arg1 + 0x130)
                                memcpy(&r9_1[sx.q(rdi_4)], &r9_1[sx.q(rcx_7 - rax_11)], rax_11 << 3)
                                rcx_7 = *(arg1 + 0x138)
                            
                            *(arg1 + 0x138) = rcx_7 - 1
                            sub_1405c53d0(arg1 + 0x130)
                        
                        break
                    
                    rdi_2 = &rdi_2[1]
                while (rdi_2 != rcx_2)
        
        LeaveCriticalSection(&data_143eff838)
    else
        while (true)
            bool z_2
            
            if (rax_3 == *(rbx + 8))
                *(rbx + 8) = rax_3 + 1
                z_2 = true
            else
                *(rbx + 8)
                z_2 = false
            
            if (z_2)
                break
            
            rax_3 = 0
            bool z_3
            
            if (0 == *(rbx + 8))
                *(rbx + 8) = 0
                z_3 = true
            else
                rax_3 = *(rbx + 8)
                z_3 = false
            
            if (z_3)
                goto label_141932974
        
        if (rbx == 0)
            goto label_14193297e
        
        int64_t* rcx_3 = rsi_1[8].q
        
        if (rcx_3 == 0)
            goto label_14193297e
        
        if (*(rcx_3 + 0x61) == 0)
            int512_t zmm1
            zmm1.o = zx.o(0)
            (*(*rcx_3 + 8))(rcx_3, zmm1)
        
        void var_38
        
        if (&rsi_1[8] != &var_38)
            rsi_1[8].q = 0
            int64_t* rcx_4 = *(rsi_1 + 0x88)
            *(rsi_1 + 0x88) = 0
            
            if (rcx_4 != 0)
                int32_t rax_7 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
        
        *(rsi_1 + 0xa4) = 3
        sub_141934230(arg1, rsi_1)
    
    if (rbx != 0)
        int32_t rax_15 = *(rbx + 8)
        *(rbx + 8) -= 1
        
        if (rax_15 == 1)
            (**rbx)(rbx)
            int32_t rbp_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    rbx.b = 1

LeaveCriticalSection(&data_143eff810)
return zx.q(rbx.b)

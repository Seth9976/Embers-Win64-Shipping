// 函数: sub_140d271f0
// 地址: 0x140d271f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
void* rsp = &var_128
int32_t var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = *(arg1 + 0xc)
void* r14 = nullptr
int32_t* r15 = arg3
void* rsi = arg2
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_1
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q((rax_4 & 0xffff) - rdx_1) * 0x18

uint8_t result = (*(rax_9 + 8) u>> 0x1d).b

if ((result & 1) == 0)
    bool cond:2_1
    
    if ((*(rsi + 0xb0) & 0x400) == 0)
        cond:2_1 = *(rsi + 0x68) == 0
    else
        result = (*(*arg1 + 0x218))(arg1, rsi, 0)
        uint8_t result_1 = result
        
        if ((result & 1) != 0)
            result = (*(*arg1 + 0x220))(arg1, rsi, r15, 0, 0)
        
        cond:2_1 = (result_1 & 2) == 0
    
    if (not(cond:2_1))
        void* rcx_6 = *(rsi + 0xc8)
        
        if (rcx_6 != 0)
            r15 = &var_f8
            var_f8 = *(rsi + 0xd0)
            rsi = rcx_6
        
        void* rdi_1 = nullptr
        
        if ((*(rsi + 0xb0) & 0x8000) != 0)
            int64_t* rcx_7 = *(rsi + 0x20)
            rdi_1 = (*(*rcx_7 + 0x328))(rcx_7, arg1, rsi)
        
        void* rbx_1 = rdi_1
        void* r13_1 = rdi_1
        
        if (rdi_1 == 0)
            int32_t rdx_6 = *(rsi + 0x58)
            
            if (rdx_6 != 0)
                int64_t rcx_8 = sx.q(rdx_6 + 0xf)
                int64_t rax_16 = rcx_8 + 0xf
                
                if (rax_16 u<= rcx_8)
                    rax_16 = 0xffffffffffffff0
                
                int64_t rax_17 = rax_16 & 0xfffffffffffffff0
                __chkstk(rax_17)
                rsp = &var_128 - rax_17
                rdi_1 = (rsp + 0x3f) & 0xfffffffffffffff0
            else
                rdi_1 = nullptr
            
            uint64_t rcx_9 = zx.q(*(rsi + 0xb6))
            memset(rcx_9 + rdi_1, 0, sx.q(rdx_6 - rcx_9.d))
        
        memcpy(rdi_1, r15, zx.d(*(rsi + 0xb6)))
        bool cond:3_1 = (*(rsi + 0xb0) & 0x400000) == 0
        void* i = *(rsi + 0x50)
        void** const var_e8 = &data_142ead968
        int64_t var_c8_1 = *(rsi + 0x60)
        int16_t var_e0_1 = 0x100
        void* var_d8_1 = rsi
        void* var_d0_1 = arg1
        void* var_c0_1 = rdi_1
        int128_t var_b8_1 = zx.o(0)
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 8
        int128_t var_78 = zx.o(0)
        void* i_2 = i
        int64_t var_60_1 = 0
        char var_58_1 = 0
        
        if (not(cond:3_1))
            void* r8_4 = &var_78:8
            
            if (i != 0)
                do
                    int64_t rax_19 = *(i + 0x40)
                    
                    if (rax_19.b s>= 0)
                        break
                    
                    if (test_bit(rax_19, 8))
                        rsp -= 0x30
                        void* rdx_11 = (rsp + 0x3f) & 0xfffffffffffffff0
                        *(rdx_11 + 8) = sx.q(*(i + 0x4c)) + r15
                        *rdx_11 = i
                        void* rax_22 = *r8_4
                        
                        if (rax_22 == 0)
                            *r8_4 = rdx_11
                        else
                            *(rax_22 + 0x10) = rdx_11
                            r8_4 = *r8_4 + 0x10
                    
                    i = *(i + 0x20)
                while (i != 0)
                
                void* rax_23 = *r8_4
                
                if (rax_23 != 0)
                    *(rax_23 + 0x10) = 0
                
                rdi_1 = var_c0_1
        
        if (rbx_1 == 0)
            int64_t* rbx_2 = *(rsi + 0xc0)
            
            if (rbx_2 != 0)
                while (true)
                    if (not(test_bit(zx.q(rbx_2[8].d), 9)))
                        (*(*rbx_2 + 0xf0))(rbx_2, sx.q(*(rbx_2 + 0x4c)) + rdi_1)
                    else
                        memset(sx.q(*(rbx_2 + 0x4c)) + rdi_1, 0, sx.q(*(rbx_2 + 0x3c) * rbx_2[7].d))
                    
                    rbx_2 = rbx_2[4]
                    
                    if (rbx_2 == 0)
                        break
                    
                    rdi_1 = var_c0_1
        
        int16_t rax_28 = *(rsi + 0xb8)
        
        if (rax_28 != 0xffff)
            r14 = zx.q(rax_28) + r15
        
        sub_140be1ca0(rsi, arg1, &var_e8, r14)
        
        if (r13_1 == 0)
            for (int64_t* i_1 = *(rsi + 0x80); i_1 != 0; i_1 = i_1[0xd])
                uint32_t count = *(i_1 + 0x3c) * i_1[7].d
                int64_t r9_2 = sx.q(*(i_1 + 0x4c))
                int64_t rdx_15 = i_1[8]
                
                if (r9_2.d + count s<= zx.d(*(rsi + 0xb6)))
                    if ((not.b((rdx_15 u>> 8).b) & 1) != 0)
                        memcpy(r15 + r9_2, var_c0_1 + r9_2, count)
                else if ((not.b((rdx_15 u>> 0x24).b) & 1) != 0)
                    (*(*i_1 + 0xe8))(i_1, r9_2 + var_c0_1)
        
        result = 0x68
        var_e8 = &data_142ead968
        
        if (var_88_1 != 0)
            result = sub_140a74f90(var_88_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result

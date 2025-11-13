// 函数: sub_141e934b0
// 地址: 0x141e934b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
uint64_t result = __security_cookie ^ &var_218
uint64_t result_1 = result
void* i = *(arg1 + 0x10)
int64_t* rbp = arg2
void* rsi = arg1

for (; i != 0; i = *(i + 0x40))
    void* rax_1 = sub_14247bf70()
    void* rdx = *(i + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38))
        result = *(rdx + 0x30)
    
    if (rax_2.d s> *(rdx + 0x38) || *(result + (rax_2 << 3)) != rax_1 + 0x30)
        result = zx.q(*(i + 0xcc) u>> 7)
        
        if ((result.b & 1) != 0)
            result = (*(i + 0xc0))(rsi, rbp)
            break
    else
        void* rdx_1 = *(i + 0x290)
        
        if (rdx_1 != 0)
            void* rdi_2 = sx.q(*(rdx_1 + 0x4c)) + rsi
            int64_t r14_1 = *rdi_2
            
            if (r14_1 != 0)
                int64_t* rsi_1 = rbp[2]
                int64_t* var_1f8_1 = rsi_1
                
                if (rsi_1 == 0)
                    sub_140d1e3f0(rbp)
                    rsi_1 = rbp[2]
                    r14_1 = *rdi_2
                    rdx_1 = *(i + 0x290)
                    var_1f8_1 = rsi_1
                
                int64_t rbp_1 = rsi_1[0x12]
                int64_t r15_1 = rsi_1[0xf]
                int64_t r13_1 = rsi_1[0x13]
                int64_t r12_1 = rsi_1[0x14]
                rsi_1[0x12] = *(i + 0x298)
                (*(*rsi_1 + 0x78))(rsi_1, rdx_1)
                rsi_1[0x13] = arg1
                rsi_1[0x14] = r14_1
                int64_t* r14_2 = *(i + 0x298)
                void var_1e0
                void** var_1d8
                (*(*r14_2 + 0x280))(r14_2, 
                    *SymBuffer::end(sub_140b4cb20(&var_1d8, var_1f8_1), &var_1e0), *rdi_2)
                sub_140b4cbb0(&var_1d8)
                var_1f8_1[0x12] = rbp_1
                result = (*(*var_1f8_1 + 0x78))(var_1f8_1, r15_1)
                rbp = arg2
                rsi = arg1
                var_1f8_1[0x13] = r13_1
                var_1f8_1[0x14] = r12_1

__security_check_cookie(result_1 ^ &var_218)
return result

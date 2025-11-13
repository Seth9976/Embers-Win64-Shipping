// 函数: sub_141b22db0
// 地址: 0x141b22db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* rax_2 = sub_140d30a00(arg1, 0)
int64_t* rdi = rax_2
void* rax_3
int64_t rax_4
void* rdx

if (rax_2 != 0)
    rax_3 = sub_140bdfe30()
    rdx = rdi[2]
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rax_2 == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    rdi = nullptr

int64_t var_280
sub_140d3a3a0(&var_280, rdi)
int64_t rbx = var_280
(*(*arg2 + 0x40))(arg2)
int64_t rax_7 = *arg2
arg2[1] = rbx
(*rax_7)(arg2)
void** result = (*(*arg2 + 0x18))(arg2)

if (rdi != 0)
    int32_t rdx_2 = *(rdi + 0x5c)
    
    if ((not.d(rdx_2 - 1) & (rdi[0xb].d - 1 + rdx_2)) s> 0 && arg1[4].d != 0)
        void** const var_268
        memset(&var_268, 0, 0x90)
        sub_140b4c2a0(&var_268)
        int64_t var_1d8_1 = 0
        var_268 = &data_14305a668
        sub_140b55290(&var_268, 1)
        int512_t zmm1_1 = sub_140b55de0(&var_268, &data_1439e5890)
        int32_t var_288
        int64_t* var_260
        char var_23f
        
        if (arg1[4].d s>= 8)
            var_288 = 0
            int32_t* rdx_4 = *var_260
            
            if (&rdx_4[1] u> var_260[1])
                int32_t* rdx_5 = &var_288
                void** const* rcx_12 = &var_268
                
                if ((var_23f & 0x20) != 0)
                    sub_140b54070(rcx_12, rdx_5, zmm1_1)
                else
                    var_268[0x2a](rcx_12, rdx_5, 4)
            else
                var_288 = *rdx_4
                *var_260 += 4
        
        if (arg1[4].d s< 8 || var_288 != 0xa1b2c3d4)
            sub_140b54f40(&var_268, &data_1439e5890, 0, 
                *sub_140b58170(&var_280, "EventParameter", 1))
            int64_t var_1d8_4 = 0
        else
            var_280.d = 0
            int32_t* rdx_6 = *var_260
            
            if (&rdx_6[1] u> var_260[1])
                int32_t* rdx_7 = &var_280
                void** const* rcx_14 = &var_268
                
                if ((var_23f & 0x20) != 0)
                    sub_140b54070(rcx_14, rdx_7, zmm1_1)
                else
                    var_268[0x2a](rcx_14, rdx_7, 4)
            else
                var_280.d = *rdx_6
                *var_260 += 4
            
            int64_t var_1d8_2 = sx.q(var_280.d)
            int64_t var_278 = 0
            int64_t var_270_1 = 0
            sub_140b53480(&var_278, zmm1_1, 3)
            var_268[0xa](&var_268, &var_278)
            int64_t rcx_17 = var_278
            int64_t var_1d8_3 = var_1d8_1
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
        
        void** var_1c8
        (*(*rdi + 0x290))(rdi, *SymBuffer::end(sub_140b4cb20(&var_1c8, &var_268), &var_280), 
            result, rdi, 0, 0)
        sub_140b4cbb0(&var_1c8)
        result = sub_140b4cb40(&var_268)

__security_check_cookie(rax_1 ^ &var_2b8)
return result

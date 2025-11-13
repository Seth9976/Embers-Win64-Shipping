// 函数: sub_141d78ca0
// 地址: 0x141d78ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result

if (*(arg1 + 0xc8) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void var_d0
    void var_98
    sub_140b2f260(&var_98, zx.o(0), _vfprintf_p_l(&var_d0, Finalizing write operations...", 
        ImageSequenceProtocol"), 1, data_143ddb418)
    sub_140b40000(&var_98)
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_4 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140b40fe0(&var_98, 0x3dcccccd, 1, 1)
    int64_t* rcx_7 = data_143ddb418
    
    if ((*(*rcx_7 + 0x50))(rcx_7) == 0)
        char i
        
        do
            void* rax_12 = *(arg1 + 0xc8)
            
            if (rax_12 != 0)
                int64_t* r9_4 = *(rax_12 + 0x70)
                int64_t rdx_3 = int.q(fconvert.t(5000000.0)) s/ 0x2710
                int32_t rcx_8
                
                if (int.q(fconvert.t(5000000.0)) s/ 0x2710 s>= 0)
                    rcx_8 = -1
                    
                    if (rdx_3 s< 0xffffffff)
                        rcx_8 = rdx_3.d
                else
                    rcx_8 = 0
                
                rax_12.b = (*(*r9_4 + 0x20))(r9_4, zx.q(rcx_8), 0).b != 0
            
            if (rax_12.b != 0)
                break
            
            void var_b8
            sub_140b389c0(&var_98, zx.o(0), sub_140a96170(&var_b8))
            int64_t* var_b0
            
            if (var_b0 != 0)
                var_b0[1].d -= 1
                
                if (var_b0[1].d == 1)
                    (**var_b0)(var_b0)
                    int32_t rax_16 = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        (*(*var_b0 + 8))(var_b0, 1)
            
            int64_t* rcx_14 = data_143ddb418
            i = (*(*rcx_14 + 0x50))(rcx_14)
        while (i == 0)
    
    result = sub_140b365b0(&var_98)
    char var_4c_1 = 0
    int64_t* var_78
    
    if (var_78 != 0)
        result = zx.q(var_78[1].d)
        var_78[1].d -= 1
        
        if (result.d == 1)
            (**var_78)(var_78)
            result = zx.q(*(var_78 + 0xc))
            *(var_78 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*var_78 + 8))(var_78, 1)
    
    int64_t* var_90
    
    if (var_90 != 0)
        result = zx.q(var_90[1].d)
        var_90[1].d -= 1
        
        if (result.d == 1)
            result = (**var_90)(var_90)
            int32_t rsi_1 = *(var_90 + 0xc)
            *(var_90 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*var_90 + 8))(var_90, zx.q(rsi_1))

void* rcx_20 = *(arg1 + 0x60)

if (rcx_20 != 0)
    result = sub_141d7f9e0(rcx_20)
    void* rdx_6 = *(arg1 + 0x60)
    
    if (rdx_6 != 0)
        *(arg1 + 0x60) = 0
        result = sub_141d75b40(arg1 + 0x60, rdx_6)

__security_check_cookie(result_1 ^ &var_108)
return result

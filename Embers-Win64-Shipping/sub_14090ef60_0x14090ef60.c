// 函数: sub_14090ef60
// 地址: 0x14090ef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rbx = arg2[1]
int64_t* rdi = *arg2

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_4 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t rax_6 = *rdi
rdi[7] = 0x400
int64_t var_f0 = 0
(*(rax_6 + 0x140))(rdi, &var_f0)
int64_t var_a0
int64_t* rax_7 = sub_140b63b70(&var_f0, &var_a0)
int16_t* rbx_1

if (rax_7[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *rax_7

int64_t* rax_9 = sub_140d2f1a0(sub_140bdfe30(), -ffffffffffffffff, rbx_1, 0)
int64_t rcx_5 = var_a0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int512_t zmm1 = sub_140d3a3a0(arg1 + 0xa8, rax_9)
void* result

if (sub_140d3e170(arg1 + 0xa8, 0, 1).b == 0)
    result.b = 0
else
    sub_1409ac860(rdi, arg1 + 0x8c, zmm1)
    int64_t* rcx_9 = rdi[1]
    int32_t result_1 = 0
    int32_t* rdx_4 = *rcx_9
    
    if (&rdx_4[1] u> rcx_9[1])
        int32_t* rdx_5 = &result_1
        
        if ((*(rdi + 0x29) & 0x20) != 0)
            sub_140b54070(rdi, rdx_5, zmm1)
        else
            (*(*rdi + 0x150))(rdi, rdx_5, 4)
    else
        result_1 = *rdx_4
        *rcx_9 += 4
    
    result = zx.q(result_1)
    
    if (result.d u> 0x400)
        result.b = 0
    else
        *(arg1 + 0x80) = 0
        
        if (*(arg1 + 0x84) != result.d)
            sub_1405a5410(arg1 + 0x78, result.d)
            result = zx.q(result_1)
        
        while (result.d s> 0)
            int64_t rsi_1 = sx.q(*(arg1 + 0x80))
            result_1 = result.d - 1
            int32_t rax_14 = (rsi_1 + 1).d
            *(arg1 + 0x80) = rax_14
            
            if (rax_14 s> *(arg1 + 0x84))
                sub_1405a4f90(arg1 + 0x78)
            
            int64_t rdx_9 = rsi_1 << 4
            int64_t* rdx_10 = rdx_9 + *(arg1 + 0x78)
            
            if (rdx_9 == neg.q(*(arg1 + 0x78)))
                rdx_10 = nullptr
            else
                *rdx_10 = 0
                rdx_10[1] = 0
            
            sub_1409ac860(rdi, rdx_10, zmm1)
            result = zx.q(result_1)
        
        int64_t* rcx_14 = rdi[1]
        char* rdx_11 = *rcx_14
        
        if (&rdx_11[1] u> rcx_14[1])
            (*(*rdi + 0x150))(rdi, arg1 + 0x88, 1)
        else
            *(arg1 + 0x88) = *rdx_11
            result = rdi[1]
            *result += 1
        
        if (*(arg1 + 0x88) u> 3)
            result.b = 0
        else
            sub_14090dc80(rdi, arg1 + 0xa0, zmm1)
            sub_14090dc80(rdi, arg1 + 0x68, zmm1)
            int64_t* rcx_18 = rdi[1]
            int32_t result_2 = 0
            int32_t* rdx_15 = *rcx_18
            
            if (&rdx_15[1] u> rcx_18[1])
                int32_t* rdx_16 = &result_2
                
                if ((*(rdi + 0x29) & 0x20) != 0)
                    sub_140b54070(rdi, rdx_16, zmm1)
                else
                    (*(*rdi + 0x150))(rdi, rdx_16, 4)
            else
                result_2 = *rdx_15
                *rcx_18 += 4
            
            result = zx.q(result_2)
            
            if (result.d s> 0x80)
                result.b = 0
            else
                while (result.d s> 0)
                    int64_t var_e8
                    __builtin_memset(&var_e8, 0, 0x18)
                    result_2 = result.d - 1
                    (*(*rdi + 0x140))(rdi, &var_e8)
                    uint64_t var_e0
                    sub_140a1d9d0(rdi, &var_e0, zmm1)
                    zmm1 = sub_14090d470(arg1 + 8, &var_e8, &var_e0)
                    uint64_t rcx_23 = var_e0
                    
                    if (rcx_23 != 0)
                        zmm1 = sub_140a74f90(rcx_23)
                    
                    result = zx.q(result_2)
                
                int32_t rcx_24 = *(rax_9 + 0x5c)
                int64_t rax_23 = sub_140a82f30(sx.q((rax_9[0xb].d - 1 + rcx_24) & neg.d(rcx_24)), 0)
                *(arg1 + 0x70) = rax_23
                int64_t r9_1 = *rax_9
                (*(r9_1 + 0x2a0))(rax_9, rax_23, 1, r9_1)
                int64_t var_c8_1 = 0
                void** const var_d0 = &data_142e1cfe8
                int64_t var_c0_1 = 0
                void*** rax_24 = j_sub_140a82f30(0x70)
                void*** rbx_2 = rax_24
                
                if (rax_24 == 0)
                    rbx_2 = nullptr
                else
                    *rbx_2 = &data_142e1d028
                    __builtin_memset(&rbx_2[1], 0, 0x14)
                    rbx_2[4] = rdi
                    __builtin_memset(&rbx_2[5], 0, 0x38)
                    rbx_2[0xc] = 1
                    rbx_2[0xd].w = 0
                
                void*** rax_25 = j_sub_140a82f30(0x18)
                
                if (rax_25 == 0)
                    rax_25 = nullptr
                else
                    rax_25[1].d = 1
                    *rax_25 = &data_142d42ea8
                    *(rax_25 + 0xc) = 1
                    rax_25[2] = rbx_2
                
                void*** var_b0_1 = rbx_2
                int64_t* var_a8_1 = rax_25
                struct DOS_Header* rcx_28 = *(arg1 + 0x70)
                struct DOS_Header var_88
                var_88.e_magic[0] = 1
                var_88.e_magic[1] = 0
                var_88.e_cblp = 0
                var_88.e_sp = 0
                var_88.e_csum = 0
                var_88.e_ip = 0
                var_88.e_cs = 0
                __builtin_memset(&var_88.e_res1[4], 0, 8)
                char result_3 = sub_1425c53c0(rcx_28, rax_9, &var_d0, &var_88)
                
                if (var_88.e_sp.q != 0)
                    void* rdx_27
                    rdx_27.b = var_88.e_res1[4]
                    rdx_27:1.b = var_88.e_res1[5]
                    rdx_27:2.b = var_88.e_res1[6]
                    rdx_27:3.b = var_88.e_res1[7]
                    rdx_27:4.w = var_88.e_oemid
                    rdx_27:6.w = var_88.e_oeminfo
                    var_58
                    void* rcx_29 = &var_58
                    
                    if (rdx_27 != 0)
                        rcx_29 = rdx_27
                    
                    int64_t rdx_28 = *rcx_29
                    (*(rdx_28 + 0x10))(rcx_29, rdx_28)
                
                if (var_a8_1 != 0)
                    var_a8_1[1].d -= 1
                    
                    if (var_a8_1[1].d == 1)
                        (**var_a8_1)(var_a8_1)
                        int32_t temp4_1 = *(var_a8_1 + 0xc)
                        *(var_a8_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*var_a8_1 + 8))(var_a8_1, 1)
                
                if (var_c8_1 != 0)
                    sub_140a74f90(var_c8_1)
                
                result = zx.q(result_3)

__security_check_cookie(rax_1 ^ &var_118)
return result

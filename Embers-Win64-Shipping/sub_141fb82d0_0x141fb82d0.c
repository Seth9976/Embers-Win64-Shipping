// 函数: sub_141fb82d0
// 地址: 0x141fb82d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_1a8
var_1a8.d = 0
void* rdi = *(arg1 + 0x48)
int64_t* rbx = *(*(arg1 + 0x50) + 0x58)
char rax_2 = (*(*rbx + 0x368))(rbx)
int64_t r14

if (rax_2 != 0 || rbx[0xda].b != rax_2)
    r14.b = 1
else
    r14.b = 0

void* r15 = *(arg1 + 0x20)
int128_t var_1a0
int128_t var_180
int64_t rax_4
int64_t* rcx_2
int32_t rdi_1

if (r14.b == 0)
    rcx_2 = &var_1a0
    var_1a0 = zx.o(0)
    rdi_1 = 2
    rax_4 = 0
else
    int64_t* rax_3 = sub_1421677e0(rbx, &var_180, rdi)
    rcx_2 = rax_3
    rdi_1 = 1
    rax_4 = *rax_3

int64_t var_168 = rax_4
int64_t* rax_5 = rcx_2[1]
rcx_2[1] = 0
*rcx_2 = 0

if ((rdi_1.b & 2) != 0)
    int64_t* rbx_1 = var_1a0:8.q
    rdi_1 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_178

if ((rdi_1.b & 1) != 0 && var_178 != 0)
    var_178[1].d -= 1
    
    if (var_178[1].d == 1)
        (**var_178)(var_178)
        int32_t temp3_1 = *(var_178 + 0xc)
        *(var_178 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_178 + 8))(var_178, 1)

int32_t rax_11

if (((*(*(arg1 + 0x50) + 0xa4) u>> 1).b & 1) == 0 || rax_2 == 0)
    rax_11 = 0
else
    rax_11 = 1

int64_t** result
int32_t rdx_2
result, rdx_2 = sub_1422c1380(r15, &var_1a8, arg2, &var_168, rax_11.b)

if (arg1 + 0x30 != result)
    int64_t** rbx_3 = *(arg1 + 0x30)
    *(arg1 + 0x30) = *result
    *result = nullptr
    
    if (rbx_3 != 0)
        void* rdi_2 = rbx_3[1]
        
        if (rdi_2 != 0)
            sub_141fa6880(rdi_2)
            j_sub_140a74f90(rdi_2)
        
        sub_141fa8b80(rbx_3, *rbx_3)
        result, rdx_2 = j_sub_140a74f90(rbx_3)

int64_t* rbx_4 = var_1a8

if (rbx_4 != 0)
    void* rdi_3 = rbx_4[1]
    
    if (rdi_3 != 0)
        sub_141fa6880(rdi_3)
        j_sub_140a74f90(rdi_3)
    
    sub_141fa8b80(rbx_4, *rbx_4)
    result, rdx_2 = j_sub_140a74f90(rbx_4)

if (r14.b != 0)
    result = *(arg1 + 0x30)
    *(arg1 + 8) = (sbb.d(rdx_2, rdx_2, data_143a2dbcc != 0) & 0x10) | (*(arg1 + 8) & 0xffffffef)
    void* r12_1 = result[1]
    
    if (r12_1 != 0)
        uint32_t r15_1 = zx.d(sub_1422c6670(r15))
        void* rdi_4 = r12_1 + 0x490
        sub_141fc8dc0(rdi_4, r15_1, 1)
        result.b = (*(*(arg1 + 0x50) + 0xa4) u>> 1).b & 1
        var_1a8.d = result.d
        
        if (result.b != 0)
            sub_141fc8dc0(r12_1 + 0x4a0, r15_1, 1)
            result = sub_141fc8dc0(r12_1 + 0x4b0, r15_1, 1)
        
        int16_t i = 0
        
        if (0 u< r15_1.w)
            int64_t rsi_2 = 0
            
            do
                void** var_158
                sub_141f79f40(&var_158, *(*(arg1 + 0x50) + 0x68), 0x400)
                int64_t* rdi_6 = *rdi_4 + rsi_2
                
                if (rdi_6 != &var_180)
                    *rdi_6 = 0
                    int64_t* rbx_6 = rdi_6[1]
                    
                    if (rbx_6 != 0)
                        rdi_6[1] = 0
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp9_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                
                int32_t var_1b8
                var_1b8.q = rdi_6
                var_180 = zx.o(0)
                sub_141fc7370(arg1, arg2, i, &var_158, var_1b8, &var_180)
                
                if (var_1a8.b != 0)
                    int64_t* rbx_7 = rdi_6[1]
                    int128_t* rcx_29 = *(r12_1 + 0x4a0) + rsi_2
                    int64_t var_190 = *rdi_6
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d += 1
                    
                    if (&var_190 != rcx_29)
                        var_190.o = *rcx_29
                        *rcx_29 = var_190.o
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            (**rbx_7)(rbx_7)
                            int32_t temp12_1 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (temp12_1 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    int64_t* rbx_8 = rdi_6[1]
                    int128_t* rcx_33 = *(r12_1 + 0x4b0) + rsi_2
                    var_1a0.q = *rdi_6
                    var_1a0:8.q = rbx_8
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d += 1
                    
                    if (&var_1a0 != rcx_33)
                        int128_t zmm1_1 = var_1a0
                        var_1a0 = *rcx_33
                        rbx_8 = var_1a0:8.q
                        *rcx_33 = zmm1_1
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp14_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
                
                if (var_178 != 0)
                    var_178[1].d -= 1
                    
                    if (var_178[1].d == 1)
                        (**var_178)(var_178)
                        int32_t temp10_1 = *(var_178 + 0xc)
                        *(var_178 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*var_178 + 8))(var_178, 1)
                
                result = sub_141f7bb50(&var_158)
                i += 1
                rdi_4 = r12_1 + 0x490
                rsi_2 += 0x10
            while (i u< r15_1.w)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        result = (**rax_5)(rax_5)
        int32_t temp6_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rax_5 + 8))(rax_5, 1)

return result

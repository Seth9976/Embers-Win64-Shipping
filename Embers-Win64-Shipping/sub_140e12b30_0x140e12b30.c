// 函数: sub_140e12b30
// 地址: 0x140e12b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rcx = *(arg1 + 0x910)
int32_t rax_3 = (*(*rcx + 0x68))(rcx)
int32_t rax_5

if (rax_3 != 1)
    int64_t* rcx_1 = *(arg1 + 0x910)
    rax_5 = (*(*rcx_1 + 0x68))(rcx_1)

int64_t rbp

if (rax_3 == 1 || rax_5 == 0)
    rbp.b = 1
else
    rbp.b = 0

int64_t rdi

if (*(arg1 + 0x734) != 5 || (*(arg1 + 0x779) & 1) != 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* rcx_2 = *(arg1 + 0x910)
int128_t zmm6

if (rcx_2 == 0)
    zmm6 = 0x3f800000
else
    (*(*rcx_2 + 0xf8))(rcx_2)
    zmm6 = arg4

int64_t* rcx_3 = data_143e20d08
(*(*rcx_3 + 0x48))(rcx_3)
void* rax_8 = data_143e20d18
int128_t zmm11
zmm11.d = arg4.d f* zmm6.d
int64_t* rbx = *(rax_8 + 0x10)
int64_t* rcx_4 = *(rax_8 + 8)
int128_t zmm8
zmm8.d = zmm11.d f* *(arg1 + 0xa50)
int128_t zmm12
zmm12.d = zmm11.d f* *(arg1 + 0xa54)
int128_t zmm9
zmm9.d = zmm11.d f* *(arg1 + 0xa58)
int128_t zmm10
zmm10.d = zmm11.d f* *(arg1 + 0xa5c)

if (rbx != 0)
    rbx[1].d += 1

int64_t r14
r14.b = (*(*rcx_4 + 0x30))(rcx_4) != 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

uint64_t result

if (rbp.b == 0)
    if (r14.b != 0)
        goto label_140e12ca0
    
    result = 5
else if (rdi.b == 0 || r14.b == 0)
    result = 5
else
label_140e12ca0:
    arg4 = zx.o(0)
    int128_t zmm7 = arg2.d
    
    if (not(zmm7.d f< 0f) && not(zmm7.d f>= *(arg1 + 0x7a0)))
        zmm6 = arg2:4.d
    
    int32_t result_1
    
    if (zmm7.d f< 0f || zmm7.d f>= *(arg1 + 0x7a0) || zmm6.d f< 0f || zmm6.d f>= *(arg1 + 0x7a4))
        *(arg1 + 0x858) = 0
        result_1 = 0
    else
        int64_t r14_1 = 0
        int64_t rbx_1 = 1
        int64_t rdi_1 = 1
        
        if (*(arg1 + 0x770) == 2 && rbp.b == 0)
            int64_t* rcx_7 = *(arg1 + 0x910)
            
            if ((*(*rcx_7 + 0x70))(rcx_7) == 0)
                arg3.o = 0x40a00000
                arg4.d = zmm8.d f+ 5f
                
                if (zmm7.d f>= arg4.d)
                    arg4.d = zmm9.d f+ 5f
                    arg5 = *(arg1 + 0x7a0) f- arg4.d
                    
                    if (zmm7.d f>= arg5)
                        rdi_1 = 2
                else
                    rdi_1 = 0
                
                arg4.d = zmm12.d f+ 5f
                
                if (zmm6.d f>= arg4.d)
                    arg4.d = zmm10.d f+ 5f
                    arg5 = *(arg1 + 0x7a4) f- arg4.d
                    
                    if (zmm6.d f>= arg5)
                        rbx_1 = 2
                else
                    rbx_1 = 0
                
                if (not(zmm7.d f< zmm8.d))
                    arg4.d = (*(arg1 + 0x7a0)).d f- zmm9.d
                    
                    if (not(zmm7.d f>= arg4.d) && not(zmm6.d f< zmm12.d))
                        arg4.d = (*(arg1 + 0x7a4)).d f- zmm10.d
                        
                        if (not(zmm6.d f>= arg4.d))
                            rbx_1 = 1
                            rdi_1 = 1
        
        result_1 = *(&data_142ecd200 + ((rbx_1 * 3 + rdi_1) << 2))
        
        if (result_1 != 5)
            if ((*(*data_143e20d08 + 0xb0))(arg4, arg5, arg3) != 0)
                result_1 = 5
            
            *(arg1 + 0x858) = result_1
        else
            int64_t* rbx_3 = *(arg1 + 0x10)
            int64_t rcx_8 = 0
            int64_t* rdi_2 = data_143e20d08
            
            if (rbx_3 != 0)
                int32_t rax_16 = rbx_3[1].d
                
                if (rax_16 != 0)
                    rbx_3[1].d = rax_16 + 1
                    rax_16.b = 1
                
                if (rax_16.b == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 != 0)
                    rcx_8 = *(arg1 + 8)
            
            int64_t var_210_1 = rcx_8
            
            if (rbx_3 != 0)
                int32_t rax_17 = rbx_3[1].d
                rbx_3[1].d = rax_17
                
                if (rax_17 == 0)
                    (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t rbx_4 = data_143e20d08
            void var_200
            int64_t* rax_21
            int32_t r9_1
            rax_21, r9_1 = (*(*rdi_2 + 0x58))(rdi_2, &var_200)
            int32_t var_220_1 = 0xffffffff
            char var_228_1 = 0
            void var_1f8
            sub_140db35d0(sub_140b81720(rbx_4), &var_1f8, (*rax_21).b, r9_1)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp4_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int32_t var_c8
            
            if (var_c8 s> 0)
                void var_1f0
                void* rdx_2 = &var_1f0
                void* var_d0
                
                if (var_d0 != 0)
                    rdx_2 = var_d0
                
                int64_t* rcx_18 = *(rdx_2 + sx.q(var_c8) * 0x48 - 0x10)
                int32_t result_2 = (*(*rcx_18 + 0x148))(rcx_18)
                
                if (result_2 == 0)
                    int64_t* rbx_6 = *(arg1 + 0x10)
                    
                    if (rbx_6 != 0)
                        int32_t rax_28 = rbx_6[1].d
                        
                        if (rax_28 != 0)
                            rbx_6[1].d = rax_28 + 1
                            rax_28.b = 1
                        
                        if (rax_28.b == 0)
                            rbx_6 = nullptr
                        
                        if (rbx_6 != 0)
                            r14_1 = *(arg1 + 8)
                    
                    void* rdx_3 = &var_1f0
                    
                    if (var_d0 != 0)
                        rdx_3 = var_d0
                    
                    int64_t rdi_4 = *(rdx_3 + sx.q(var_c8) * 0x48 - 0x10)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp6_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    if (rdi_4 == r14_1)
                        zmm11.d = zmm11.d f* *(arg1 + 0x7c0)
                        zmm6.d = zmm6.d f- zmm12.d
                        
                        if (zmm11.d f> zmm6.d)
                            result_1 = 0xa
                else
                    result_1 = result_2
            
            *(arg1 + 0x858) = result_1
            sub_140de0810(&var_1f8)
            result_1 = *(arg1 + 0x858)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_248)
return result

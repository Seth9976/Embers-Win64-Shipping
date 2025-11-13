// 函数: sub_142809030
// 地址: 0x142809030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg2 + 0xa0))(arg2)
int64_t* arg_28
int64_t* rbx = arg_28
rax_1[1].d
sub_1427e3ab0(rbx)
int64_t r9 = *rbx
arg_28.b = 0
(*r9)(rbx, &arg_28, 1, r9)
int64_t r9_1 = *arg4
(*(r9_1 + 0x10))(arg4, "NbParticles", rbx[4], r9_1)
int32_t i = 0
rbx[3] = 0
*(rax_1 + 0xc)
sub_1427e3ab0(rbx)
arg_28.b = 0
(**rbx)(rbx, &arg_28, 1)
(*(*arg4 + 0x10))(arg4, "ValidParticleRange", rbx[4])
rbx[3] = 0
int16_t arg_10
(*(*arg2 + 0x1c0))(arg2, &arg_10)
int32_t r15 = *(rax_1 + 0xc)

if (r15 != 0)
    int32_t* r14_1 = rax_1[2]
    
    if (r14_1 != 0)
        if ((r15 - 1) u>> 5 != 0xffffffff)
            do
                char const* const rdx_5
                int64_t r8_2
                
                if (i == 0 || (i.b & 7) != 0)
                    r8_2 = 1
                    rdx_5 = &data_1434cf410
                else
                    r8_2 = 4
                    rdx_5 = "\n\t\t\t"
                
                (**rbx)(rbx, rdx_5, r8_2)
                *r14_1
                sub_1427e3ab0(rbx)
                i += 1
                r14_1 = &r14_1[1]
            while (i u< ((r15 - 1) u>> 5) + 1)
        
        arg_28.b = 0
        (**rbx)(rbx, &arg_28, 1)
        (*(*arg4 + 0x10))(arg4, "ValidParticleBitmap", rbx[4])
        i = 0
        rbx[3] = 0
    
    int32_t r14_2 = rax_1[1].d
    
    if (r14_2 != 0 && rax_1[3] != 0)
        if (r14_2 != 0)
            do
                uint32_t rcx_12
                
                if (i != 0)
                    rcx_12 = i u/ 6 * 3
                
                char const* const rdx_10
                int64_t r8_4
                
                if (i == 0 || i != rcx_12 * 2)
                    r8_4 = 1
                    rdx_10 = &data_1434cf410
                else
                    r8_4 = 4
                    rdx_10 = "\n\t\t\t"
                
                (**rbx)(rbx, rdx_10, r8_4)
                sub_1427e39a0(rbx, zx.q(rax_1[4].d * i) + rax_1[3])
                i += 1
            while (i u< r14_2)
        
        arg_28.b = 0
        (**rbx)(rbx, &arg_28, 1)
        (*(*arg4 + 0x10))(arg4, "Positions", rbx[4])
        i = 0
        rbx[3] = 0
    
    char rax_16 = arg_10.b
    
    if ((rax_16 & 2) != 0)
        int32_t r14_3 = rax_1[1].d
        
        if (r14_3 != 0 && rax_1[5] != 0)
            if (r14_3 != 0)
                do
                    uint32_t rcx_18
                    
                    if (i != 0)
                        rcx_18 = i u/ 6 * 3
                    
                    char const* const rdx_17
                    int64_t r8_6
                    
                    if (i == 0 || i != rcx_18 * 2)
                        r8_6 = 1
                        rdx_17 = &data_1434cf410
                    else
                        r8_6 = 4
                        rdx_17 = "\n\t\t\t"
                    
                    (**rbx)(rbx, rdx_17, r8_6)
                    sub_1427e39a0(rbx, zx.q(i * rax_1[6].d) + rax_1[5])
                    i += 1
                while (i u< r14_3)
            
            arg_28.b = 0
            (**rbx)(rbx, &arg_28, 1)
            (*(*arg4 + 0x10))(arg4, "Velocities", rbx[4])
            rax_16 = arg_10.b
            i = 0
            rbx[3] = 0
    
    if ((rax_16 & 4) != 0)
        int32_t r14_4 = rax_1[1].d
        
        if (r14_4 != 0 && rax_1[7] != 0)
            if (r14_4 != 0)
                do
                    uint32_t rcx_24
                    
                    if (i != 0)
                        rcx_24 = i u/ 6 * 3
                    
                    char const* const rdx_24
                    int64_t r8_8
                    
                    if (i == 0 || i != rcx_24 * 2)
                        r8_8 = 1
                        rdx_24 = &data_1434cf410
                    else
                        r8_8 = 4
                        rdx_24 = "\n\t\t\t"
                    
                    (**rbx)(rbx, rdx_24, r8_8)
                    char var_b8[0x80]
                    memset(&var_b8, 0, 0x80)
                    _mm_cvtps_pd(*(zx.q(rax_1[8].d * i) + rax_1[7]))
                    physx::shdfnd::snprintf(&var_b8, 0x80, "%g")
                    
                    if (var_b8[0] != 0)
                        int64_t r8_9 = -1
                        
                        do
                            r8_9 += 1
                        while (var_b8[r8_9] != 0)
                        
                        (**rbx)(rbx, &var_b8, r8_9)
                    
                    i += 1
                while (i u< r14_4)
            
            arg_28.b = 0
            (**rbx)(rbx, &arg_28, 1)
            (*(*arg4 + 0x10))(arg4, "RestOffsets", rbx[4])
            rax_16 = arg_10.b
            rbx[3] = 0
    
    if ((rax_16 & 8) != 0)
        char const (** var_f0_1)[0x7] = &data_143b7c2f0
        sub_142807030(arg4, rbx, 6, &rax_1[9], 0x428047f0, rax_1[1].d, "Flags")

(*(*rax_1 + 8))(rax_1)
(*(*arg2 + 0x178))(arg2)
sub_1427e3ab0(rbx)
arg_28.b = 0
(**rbx)(rbx, &arg_28, 1)
(*(*arg4 + 0x10))(arg4, "MaxParticles", rbx[4])
rbx[3] = 0
int16_t arg_20
(*(*arg2 + 0x170))(arg2, &arg_20)
sub_1427e72d0(arg4, rbx, "ParticleBaseFlags", zx.d(arg_20), &data_143b7c3a0)
sub_1427e72d0(arg4, rbx, "ParticleReadDataFlags", zx.d(arg_10), &data_143b7c530)
int32_t var_d0
int32_t var_c8
(*(*arg2 + 0x108))(arg2, &var_c8, &var_d0)
int32_t var_e8 = var_c8
int32_t var_c4
int32_t var_e4 = var_c4
int32_t var_c0
int32_t var_e0 = var_c0
int32_t var_dc = var_d0
sub_1427e30d0(arg4, arg3, rbx, "ProjectionPlane", &var_e8)
var_e8.q = rbx[2]
int64_t var_108_1 = arg3
var_e0.q = 0
int64_t var_d8 = 0
sub_1427e1f20(&var_e8, arg2)
int32_t result = var_d8:4.d

if ((result & 0x7fffffff) != 0 && result s>= 0)
    int64_t rdx_36 = var_e0.q
    
    if (rdx_36 != 0)
        int64_t* rcx_46 = *var_e8.q
        return (*(*rcx_46 + 0x10))(rcx_46, rdx_36)

return result

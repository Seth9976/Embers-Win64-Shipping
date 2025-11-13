// 函数: sub_142103e40
// 地址: 0x142103e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x28) u>> 6)
int64_t r10 = sx.q(arg2)

if ((result.b & 1) != 0)
    int32_t rdx
    
    if (r10.d u> 0x30)
        rdx = *(r10 * 0x14 + 0x143f025f8)
    else
        switch (r10)
            case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                rdx = 3
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                rdx = *(r10 * 0x14 + 0x143f025f8)
            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                rdx = 1
    
    result = sub_1411a4ac0(r10.d, rdx)
    
    if (result.b != 0)
        result = sub_1419cae50(arg3, data_143f55680)
        
        if (result.b != 0)
            int16_t* var_28
            sub_140a2e390(&var_28, 
                Shader attempted to bind the Primitive uniform buffer even though Vertex Factory %s "
            "computes a PrimitiveId per-instance.  This will break auto-", *(arg1 + 8))
            int16_t* const rsi_1 = &data_142d40450
            int32_t var_20
            
            if (var_20 != 0)
                rsi_1 = var_28
            
            int16_t* rdi_1 = nullptr
            int16_t* var_38 = nullptr
            int32_t rbp_1 = 0
            int64_t var_30_1 = 0
            int32_t r12_1 = 0
            
            if (rsi_1 != 0 && *rsi_1 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rsi_1[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_38, rbx_1.d + 1)
                    r12_1 = var_30_1:4.d
                    rbp_1 = var_30_1.d
                    rdi_1 = var_38
                
                rbp_1 += rbx_1.d + 1
                var_30_1.d = rbp_1
                
                if (rbp_1 s> r12_1)
                    sub_140594770(&var_38)
                    r12_1 = var_30_1:4.d
                    rbp_1 = var_30_1.d
                    rdi_1 = var_38
                
                UnDecorator::getReferenceType(rdi_1, rsi_1, (rbx_1.d + 1) * 2)
            
            int64_t* r15_1 = *arg4
            int64_t* rbx_3 = r15_1
            void* rsi_4 = &r15_1[sx.q(arg4[1].d) * 2]
            
            if (r15_1 != rsi_4)
                while (true)
                    int16_t* rdx_5 = &data_142d40450
                    
                    if (rbp_1 != 0)
                        rdx_5 = rdi_1
                    
                    int16_t* const rcx_9
                    
                    if (rbx_3[1].d == 0)
                        rcx_9 = &data_142d40450
                    else
                        rcx_9 = *rbx_3
                    
                    result = sub_140a54510(rcx_9, rdx_5)
                    
                    if (result.d == 0)
                        break
                    
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rsi_4)
                        goto label_142103fd1
            
            if (r15_1 == rsi_4 || ((rbx_3 - r15_1) s>> 4).d == 0xffffffff)
            label_142103fd1:
                int64_t rbx_4 = sx.q(arg4[1].d)
                int32_t rax_2 = (rbx_4 + 1).d
                arg4[1].d = rax_2
                
                if (rax_2 s> *(arg4 + 0xc))
                    sub_1405a4f90(arg4)
                
                result = (rbx_4 << 4) + *arg4
                *result = rdi_1
                *(result + 8) = rbp_1
                *(result + 0xc) = r12_1
            else if (rdi_1 != 0)
                result = sub_140a74f90(rdi_1)
            
            int16_t* rcx_11 = var_28
            
            if (rcx_11 != 0)
                return sub_140a74f90(rcx_11)

return result

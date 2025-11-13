// 函数: sub_1407acf60
// 地址: 0x1407acf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
void** const rax_3
void*** rdi_1

if (sub_140b5b9d0(arg2, u"SubmitQuery") == 0)
    if (sub_140b5b9d0(arg2, u"ReadQuery") != 0)
        void*** rax_5 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfbc8
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbfc20
        goto label_1407ad1ec
    
    if (sub_140b5b9d0(arg2, u"PerformCollisionQuery") != 0)
        void*** rax_8 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_8
        
        if (rax_8 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfc78
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbfcd0
        goto label_1407ad1ec
    
    if (sub_140b5b9d0(arg2, u"PerformCollisionQuerySyncCPU") != 0)
        void*** rax_11 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_11
        
        if (rax_11 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfd28
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbfd80
        goto label_1407ad1ec
    
    if (sub_140b5b9d0(arg2, u"PerformCollisionQueryAsyncCPU") != 0)
        void*** rax_14 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_14
        
        if (rax_14 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfdd8
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbfe30
        goto label_1407ad1ec
    
    if (sub_140b5b9d0(arg2, u"PerformCollisionQueryGPUShader") != 0)
        void*** rax_17 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_17
        
        if (rax_17 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfe88
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbfee0
        goto label_1407ad1ec
    
    if (sub_140b5b9d0(arg2, u"QuerySceneDepthGPU") != 0)
        void*** rax_20 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_20
        
        if (rax_20 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbff38
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dbff90
        goto label_1407ad1ec
    
    result = sub_140b5b9d0(arg2, u"QueryMeshDistanceFieldGPU")
    
    if (result.b != 0)
        void*** rax_22 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_22
        
        if (rax_22 == 0)
            goto label_1407ad1ef
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbffe8
        rdi_1[3] = sub_140a387b0()
        rax_3 = &data_142dc0040
        goto label_1407ad1ec
else
    void*** rax_1 = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax_1
    
    if (rax_1 == 0)
        goto label_1407ad1ef
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dbfb18
    rdi_1[3] = sub_140a387b0()
    rax_3 = &data_142dbfb70
label_1407ad1ec:
    *rdi_1 = rax_3
label_1407ad1ef:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rdi_1 != 0)
            result = (*rdi_1)[8](rdi_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_9 = *arg4
            
            if (rcx_9 != 0)
                result = (*(*rcx_9 + 0x38))(rcx_9, 0)
                void* rcx_10 = *arg4
                
                if (rcx_10 != 0)
                    result = sub_140a84c80(rcx_10, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
return result

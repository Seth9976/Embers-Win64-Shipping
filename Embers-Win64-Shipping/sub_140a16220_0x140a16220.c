// 函数: sub_140a16220
// 地址: 0x140a16220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* result = arg2
int64_t* rbx = arg1
int64_t* var_c8 = arg1
int64_t rax_2 = *arg5
int64_t r12 = arg4
int64_t* r15 = arg3
int64_t* var_98 = arg3
int64_t var_a8 = 0
struct IMFActivate var_b8 = 0
int64_t* var_c0 = nullptr
(*(rax_2 + 0x110))(arg5, &var_c0)
int64_t* rcx_1 = var_c0
int64_t var_68
(*(*rcx_1 + 0x40))(rcx_1, &var_68)
int64_t rcx_2 = var_68
struct IMFMediaType var_e0
int64_t* var_78
int64_t var_70
int64_t var_60

if (rcx_2 != 0x10000073647561 || var_60 != 0x719b3800aa000080)
    if (rcx_2 != 0x10000073646976 || var_60 != 0x719b3800aa000080)
        goto label_140a1643b
    
    int64_t* rcx_18 = var_c0
    var_c8 = nullptr
    (*(*rcx_18 + 0x38))(rcx_18, &var_c8)
    var_e0 = 0
    MFCreateMediaType(&var_e0)
    int64_t* rcx_20 = var_c8
    uint32_t rdi_1 = 0
    int64_t* rsi_3 = nullptr
    
    if ((*(*rcx_20 + 0x40))(rcx_20, &data_1434cbc10, &var_98) s>= 0)
        rsi_3 = var_98
        rdi_1 = (rsi_3 u>> 0x20).d
    
    int64_t* rcx_21 = var_c8
    (*(*rcx_21 + 0x50))(rcx_21, &data_1434cbb90, &var_78)
    struct IMFMediaType rcx_22 = var_e0
    (*(*rcx_22 + 0xc0))(rcx_22, &data_1434cbb80, "vids")
    int64_t* rcx_23 = var_78
    *(rbx + 0x34) = rdi_1
    rbx[7].d = rsi_3.d
    int32_t rax_39
    
    if ((rcx_23 != 0x10000000000018 || var_70 != 0x719b3800aa000080)
            && (rcx_23 != 0x10000000000017 || var_70 != 0x719b3800aa000080)
            && (rcx_23 != 0x10000000000014 || var_70 != 0x719b3800aa000080)
            && (rcx_23 != 0x10000000000016 || var_70 != 0x719b3800aa000080)
            && (rcx_23 != 0x10000000000015 || var_70 != 0x719b3800aa000080))
        struct IMFMediaType rcx_25 = var_e0
        (*(*rcx_25 + 0xc0))(rcx_25, &data_1434cbb90, "YUY2")
        int64_t* rdx_15 = var_78
        int32_t rax_41 = *(rbx + 0x34)
        *(rbx + 0x3c) = 8
        
        if (rdx_15 == 0x10000034363248 && var_70 == 0x719b3800aa000080)
            rax_41 = (rax_41 + 0xf) & 0xfffffff0
        else if (rdx_15 == 0x4ff856223f40f4f0 && var_70 == 0x5eee4b587aa1d8b6)
            rax_41 = (rax_41 + 0xf) & 0xfffffff0
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_41)
        *(rbx + 0x2c) = rbx[7].d
        rbx[5].d = (temp1_1 - temp0_1) s>> 1
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_41 * 2)
        rax_39 = (temp3_1 ^ temp2_1) - temp2_1
    else
        struct IMFMediaType rcx_24 = var_e0
        (*(*rcx_24 + 0xc0))(rcx_24, &data_1434cbb90, &data_1434cb7a0)
        *(rbx + 0x3c) = 4
        rbx[5].d = *(rbx + 0x34)
        *(rbx + 0x2c) = rbx[7].d
        rax_39 = *(rbx + 0x34) << 2
    
    rbx[6].d = rax_39
    struct IMFMediaType rcx_28 = var_e0
    (*(*rcx_28 + 0xa8))(rcx_28, &data_1434cbba0, 1)
    MFCreateSampleGrabberSinkActivate(var_e0, arg6, &var_b8)
    struct IMFMediaType rcx_30 = var_e0
    
    if (rcx_30 != 0)
        (*(*rcx_30 + 0x10))(rcx_30)
        var_e0 = 0
    
    int64_t* rcx_31 = var_c8
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x10))(rcx_31)
    
    var_a8.d = rdi_1
    var_a8:4.d = rsi_3.d
label_140a16433:
    result = arg2
    goto label_140a1643b

if (arg7 != 0)
    MFCreateAudioRendererActivate(&var_b8)
    TEB* gsbase
    int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143cd5b60 s> *rsi_2)
        _Init_thread_header(&data_143cd5b60)
        
        if (data_143cd5b60 == 0xffffffff)
            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
            _Init_thread_footer(&data_143cd5b60)
    
    int64_t rbx_1 = data_143cd5b58
    sub_140a387e0()
    void* r8 = data_14399e720
    
    if ((*(r8 + 8))(&data_14399e720, rbx_1, r8) s> 0)
        if (data_143cd5b60 s> *rsi_2)
            _Init_thread_header(&data_143cd5b60)
            
            if (data_143cd5b60 == 0xffffffff)
                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                _Init_thread_footer(&data_143cd5b60)
        
        int64_t rbx_2 = data_143cd5b58
        sub_140a387e0()
        int64_t* r12_1 = nullptr
        int32_t rdi = 0
        var_78 = nullptr
        var_70:4.d = 0
        void* r8_1 = data_14399e720
        int32_t rax_9 = (*(r8_1 + 8))(&data_14399e720, rbx_2, r8_1)
        int32_t i = 0
        var_e0.vtable.d = rax_9
        
        if (rax_9 s> 0)
            do
                void* r9 = data_14399e720
                int64_t rax_10 = (*(r9 + 0x10))(&data_14399e720, rbx_2, zx.q(i), r9)
                int64_t r15_1
                
                if (rax_10 == 0)
                    r15_1 = 0
                else
                    r15_1 = rax_10 - 8
                
                int64_t r14_1 = sx.q(rdi)
                rdi = (r14_1 + 1).d
                var_70.d = rdi
                
                if (rdi s> var_70:4.d)
                    sub_1405a4d70(&var_78)
                    rdi = var_70.d
                    r12_1 = var_78
                
                i += 1
                r12_1[r14_1] = r15_1
            while (i s< var_e0.vtable.d)
            
            r15 = var_98
        
        char var_e8
        sub_1405ea950(r12_1, rdi, var_e8)
        int64_t* rbx_3 = *r12_1
        sub_140a74f90(r12_1)
        int16_t* var_88
        (*(*rbx_3 + 0x70))(rbx_3, &var_88)
        int32_t var_80
        
        if (var_80 s> 1)
            struct IMFActivate rcx_10 = var_b8
            int16_t* const r8_4 = &data_142d40450
            
            if (var_80 != 0)
                r8_4 = var_88
            
            (*(*rcx_10 + 0xc8))(rcx_10, &data_142d5b2d8, r8_4)
        
        int16_t* rcx_11 = var_88
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        r12 = arg4
        rbx = var_c8
        goto label_140a16433
    
    rbx = var_c8
label_140a1643b:
    int64_t* rcx_12 = var_c0
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x10))(rcx_12)
    
    struct IMFTopologyNode ppNode = 0
    MFCreateTopologyNode(MF_TOPOLOGY_SOURCESTREAM_NODE, &ppNode)
    struct IMFTopologyNode ppNode_2 = ppNode
    (*(*ppNode_2 + 0xd8))(ppNode_2, &data_142d5b248, rbx[3])
    struct IMFTopologyNode ppNode_3 = ppNode
    (*(*ppNode_3 + 0xd8))(ppNode_3, &data_142d5b258, r12)
    struct IMFTopologyNode ppNode_4 = ppNode
    (*(*ppNode_4 + 0xd8))(ppNode_4, &data_142d5b268, arg5)
    (*(*r15 + 0x110))(r15, ppNode)
    struct IMFTopologyNode ppNode_1 = 0
    MFCreateTopologyNode(MF_TOPOLOGY_OUTPUT_NODE, &ppNode_1)
    struct IMFTopologyNode ppNode_5 = ppNode_1
    (*(*ppNode_5 + 0x108))(ppNode_5, var_b8)
    struct IMFTopologyNode ppNode_6 = ppNode_1
    (*(*ppNode_6 + 0xa8))(ppNode_6, &data_142d5b278, 0)
    struct IMFTopologyNode ppNode_7 = ppNode_1
    (*(*ppNode_7 + 0xa8))(ppNode_7, &data_142d5b288, 0)
    (*(*r15 + 0x110))(r15, ppNode_1)
    struct IMFTopologyNode ppNode_8 = ppNode
    (*(*ppNode_8 + 0x140))(ppNode_8, 0, ppNode_1, 0)
    struct IMFTopologyNode ppNode_9 = ppNode
    
    if (ppNode_9 != 0)
        (*(*ppNode_9 + 0x10))(ppNode_9)
        ppNode = 0
    
    struct IMFTopologyNode ppNode_10 = ppNode_1
    
    if (ppNode_10 != 0)
        (*(*ppNode_10 + 0x10))(ppNode_10)
        ppNode_1 = 0
    
    struct IMFActivate rcx_15 = var_b8
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x10))(rcx_15)
    
    *result = var_a8
else
    int64_t* rcx_3 = var_c0
    
    if (rcx_3 != 0)
        int64_t rdx_2 = *rcx_3
        (*(rdx_2 + 0x10))(rcx_3, rdx_2)
    
    *result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result

// 函数: sub_1413ab160
// 地址: 0x1413ab160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x38)
void var_50
void arg_8
sub_140b4c620(&arg_8, sub_140b58260(&var_50, u"FNiagaraSpriteVertexFactory", 0))
uint64_t result

if (rbx == j_sub_1419cfe40(&arg_8))
label_1413ab2e6:
    uint64_t rdx_7 = zx.q(*arg1)
    
    if (((*(&data_143f025fc + sx.q(rdx_7.d) * 0x14) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_7))
        result.b = 1
        return result
else
    void var_48
    void arg_10
    sub_140b4c620(&arg_10, sub_140b58260(&var_48, u"FNiagaraRibbonVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&arg_10))
        goto label_1413ab2e6
    
    void var_40
    void arg_18
    sub_140b4c620(&arg_18, sub_140b58260(&var_40, u"FLocalVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&arg_18))
        goto label_1413ab2e6
    
    void var_38
    void arg_20
    sub_140b4c620(&arg_20, sub_140b58260(&var_38, u"FLandscapeVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&arg_20))
        goto label_1413ab2e6
    
    void var_68
    void var_30
    sub_140b4c620(&var_68, sub_140b58260(&var_30, u"FLandscapeFixedGridVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&var_68))
        goto label_1413ab2e6
    
    void var_60
    void var_28
    sub_140b4c620(&var_60, sub_140b58260(&var_28, u"FLandscapeXYOffsetVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&var_60))
        goto label_1413ab2e6
    
    void var_58
    void var_20
    sub_140b4c620(&var_58, sub_140b58260(&var_20, u"FGPUSkinPassthroughVertexFactory", 0))
    
    if (rbx == j_sub_1419cfe40(&var_58))
        goto label_1413ab2e6

result.b = 0
return result
